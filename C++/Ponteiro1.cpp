#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int var1 = 100; // a informa��o
    int *ptr1; // ponteiro
    ptr1 = &var1; // ponteiro armazena o endere�o da informa��o
    cout << "O valor contido no endereco de memoria "; 
    cout << ptr1 <<" er "<< *ptr1 << endl; //O valor contido no endereco de memoria 0x6ffe04 er 100  
    system ("pause");
}


/*
Refer�ncia: Refer�ncia � quando nos referimos diretamente ao identificador do endere�o da mem�ria. (Operador &)
Derefer�ncia: Derefer�ncia � quando nos referimos ao valor contido no endere�o armazenado(operador *)  */
