#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct data Data;

struct data {
    short dia;
    short mes;
    int ano;
};

int main (void){
    Data data; //variável data do tipo struct data
    Data *hoje; //ponteiro hoje para um tipo struct data
    hoje = &data; //hoje aponta para o endereço de data

    //dados sendo inseridos na variável data
    hoje->dia = 20; //mesma coisa que hoje.dia
    hoje->mes = 1;
    hoje->ano = 2009;

    //mostrando o que está gravado no endereço contido em hoje
    cout << "Data registrada:"<<endl;
    cout << hoje->dia <<"/"<< hoje->mes <<"/"<< hoje->ano << endl;
    system ("pause");
}

/*struct sem ponteiro
#include <iostream>
#include <cstdlib>
using namespace std;

struct data {
    int dia;
    int mes;
    int ano;
};

int main (void){
    data hoje;
    hoje.dia = 23;
    hoje.mes = 9;
    hoje.ano = 2008;
    cout <<"Hoje e "<<hoje.dia<<"/"<<hoje.mes<<"/"<<hoje.ano<<endl;
    system ("pause");
    return EXIT_SUCCESS;
}*/
