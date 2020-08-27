#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int var1 = 100; // a informação
    int *ptr1; // ponteiro
    ptr1 = &var1; // ponteiro armazena o endereço da informação
    cout << "O valor contido no endereco de memoria "; 
    cout << ptr1 <<" er "<< *ptr1 << endl; //O valor contido no endereco de memoria 0x6ffe04 er 100  
    system ("pause");
}


/*
Referência: Referência é quando nos referimos diretamente ao identificador do endereço da memória. (Operador &)
Dereferência: Dereferência é quando nos referimos ao valor contido no endereço armazenado(operador *)  */
