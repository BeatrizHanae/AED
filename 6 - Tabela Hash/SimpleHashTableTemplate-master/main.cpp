#include <iostream>
#include <type_traits>
#include <string>

using namespace std;

constexpr int DEFAULT_CAPACITY = 100;

class Hashable
{
public:
    Hashable();
    ~Hashable();

    virtual int hashCode() const = 0;
};

class Person: public Hashable
{
public:
    Person(const string& name);
    virtual ~Person() = default;

    string getName() const;

    int hashCode() const;
private:

    string name;
};


Hashable::Hashable() = default;

Hashable::~Hashable() = default;


Person::Person(const string& name): name(name)
{

}

string Person::getName() const
{
    return this->name;
}

int Person::hashCode() const
{
    int sum = 0;
    int pos = 0;

    for (char ch: name) {
        sum += ch*++pos;
    }

    return sum;
}

template <typename T>
class SimpleHashTable
{
    static_assert(is_base_of<Hashable, T>::value, "T must inherit from Hashable");

public:
    SimpleHashTable();

    explicit SimpleHashTable(size_t capacity);

    virtual ~SimpleHashTable();

    void insert(T data);

    void remove(T data);

    T* find(T data) const;

    bool exists(T data) const;
private:
    int calcPosFromHash(T data) const;

    T** array;
    size_t capacity;
};

template <typename T>
SimpleHashTable<T>::SimpleHashTable(): capacity(DEFAULT_CAPACITY)
{
    array = new T*[capacity];
}

template<typename T>
SimpleHashTable<T>::SimpleHashTable(size_t capacity): capacity(capacity)
{
    array = new T*[capacity];
}

template <typename T>
SimpleHashTable<T>::~SimpleHashTable() = default;

template <typename T>
void SimpleHashTable<T>::insert(T data)
{
    array[calcPosFromHash(data)] = &data;
}

template <typename T>
void SimpleHashTable<T>::remove(T data)
{
    array[calcPosFromHash(data)] = nullptr;
}

template <typename T>
T* SimpleHashTable<T>::find(T data) const
{
    return array[calcPosFromHash(data)];
}

template <typename T>
bool SimpleHashTable<T>::exists(T data) const
{
    T* value = array[calcPosFromHash(data)];

    return value != nullptr;
}

template<typename T>
int SimpleHashTable<T>::calcPosFromHash(T data) const {
    int k = data.hashCode();

    return k % capacity;
}

int main()
{
    SimpleHashTable<Person> hashTable;

    hashTable.insert(Person("Eduardo"));
    hashTable.insert(Person("Marcelo"));
    hashTable.insert(Person("Hanae"));
    hashTable.insert(Person("Djovana"));
    hashTable.insert(Person("Hanna"));
    hashTable.insert(Person("Hiago"));

    // find() test
    Person* p = hashTable.find(Person("Eduardo"));

    if (p != nullptr) {
        cout << "Founded: " << p->getName() << endl;
    } else {
        cout << "Not Founded" << endl;
    }

    // exists() test
    cout << "Exists person 'hanae'? " << (hashTable.exists(Person("hanae")) ? "Yes" : "No") << endl;

    hashTable.remove(Person("hanae"));
    cout << "Exists person 'hanae' after remove her? " << (hashTable.exists(Person("hanae")) ? "Yes" : "No") << endl;

    return EXIT_SUCCESS;
}
