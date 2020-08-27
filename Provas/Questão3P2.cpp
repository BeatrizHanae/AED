//Beatriz Hanae Fujimoto - 160113814

#include <iostream>
#include <string>

using namespace std;

class Person
{
    private :
    string name;
    int age;
    Person *prev;
    Person *next;
    public:
    Person(string name, int age);
    void setPrev(Person * prev);
    void setNext(Person * next);
    Person * getPrev();
    Person * getNext();
    string  getName();
    int  getAge();
};

using namespace std;

Person::Person(string name, int age){
    this->name = name;
    this->age = age;
    this->prev = NULL;
    this->next = NULL;
}

void Person::setPrev(Person *prev){
    this->prev = prev;
}

void Person::setNext(Person *next){
    this->next = next;
}

string Person::getName(){
    return this->name;
}

int Person::getAge(){
    return this->age;
}

Person * Person::getPrev(){
    return this->prev;
}

Person *Person::getNext(){
    return this->next;
}


using namespace std;

Person * addOnBB(int age, string name, Person * first){
    Person * p = new Person (name, age);
    if(first == NULL){
        return p;
    }
    int i = 0;
    while(true){
        if (first->getName()[i] < name[i])
        {
            if (first->getNext() == NULL)
            {
                first->setNext(p);
                p->setPrev(first);
                return first;
            }
            else
            {
                p = addOnBB(age, name, first->getNext());
            }
        }
        else if (first->getName()[i] >  name[i]){
            if (first->getPrev() == NULL){
                first->setPrev(p);
                p->setNext(first);
                return p;
            }
            else{
                p = addOnBB(age, name, first->getPrev());
            }
        }
        i++;
    }
}

void show(Person * first){
    if(first != NULL){
        cout << first->getName() << " - " << first->getAge() << endl;
        show(first->getNext());
    }
}

int main(){
    string name;
    int age;
    Person * first = NULL;

    cout << "Adicione pessoas. Para parar escreva sair no nome" << endl;
    cout << "Nome: ";
    cin >> name;

    while(name != "sair"){
        cout << "Idade: ";
        cin >> age;

        first = addOnBB(age, name,first);

        cout << "Nome: ";
        cin >> name;
    }

    show(first);
}
