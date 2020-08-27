#include <iostream>
//#include "simplehashtable.h"
#include <string>

using namespace std;

const int MAX_SIZE = 100;

class SimpleHashTable
{
public:
    SimpleHashTable();
    ~SimpleHashTable();

    string find(const string& data) const;

    void insert(string data);

    void remove(string data);

    bool exist(string data);
private:
    int hash(string text) const;

    string* array[MAX_SIZE];
};

SimpleHashTable::SimpleHashTable()
{
    for (int i = 0; i < MAX_SIZE; i++) {
        array[i] = nullptr;
    }
}

SimpleHashTable::~SimpleHashTable() = default;

string SimpleHashTable::find(const string& data) const
{
    return *array(data);
}

void SimpleHashTable::insert(string data)
{
    int k = hash(data);
    cout << "k: " << k << endl;

    array[k] = &data;
}

void SimpleHashTable::remove(string data)
{
    int k = hash(data);
    array[k] = nullptr;
}

bool SimpleHashTable::exist(string data)
{
    int k = hash(data);
    string* tmp = array[k];

    return tmp != nullptr;
}

// hash function tosquinha
int SimpleHashTable::hash(string text) const
{
    int sum = 0;
    int pos = 0;

    for (char ch: text) {
        sum += ch*++pos;
    }

    return sum%MAX_SIZE;
}

int main(int argc, char *argv[])
{
    cout << "Simple HasTable" << endl;

    SimpleHashTable* hashTable = new SimpleHashTable();

    hashTable->insert("Eduardo");
    hashTable->insert("Marcelo");
    hashTable->insert("Hanae");
    hashTable->insert("Djovana");
    hashTable->insert("Hanna");
    hashTable->insert("Hiago");

    string str = hashTable->find(9);
    cout << "Encontrou: " << str << " com o hash 9" << endl;

    /*cout << "Existe 'hanae'? " << (hashTable->exist("hanae") ? "Sim" : "Nao") << endl;

    hashTable->remove("hanae");
    cout << "Existe 'hanae'? " << (hashTable->exist("hanae") ? "Sim" : "Nao") << endl;

    delete hashTable;
*/
    return 0;
}
