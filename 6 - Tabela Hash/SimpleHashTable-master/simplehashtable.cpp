#include "simplehashtable.h"
#include <iostream>

SimpleHashTable::SimpleHashTable()
{
    for (int i = 0; i < MAX_SIZE; i++) {
        array[i] = nullptr;
    }
}

SimpleHashTable::~SimpleHashTable() = default;

string SimpleHashTable::find(const string& data) const
{
	for (int i = 0; i < MAX_SIZE; i++) {
        if (array[i] == data) {
        	return data;
		}
    }
    //return *array[k];
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
