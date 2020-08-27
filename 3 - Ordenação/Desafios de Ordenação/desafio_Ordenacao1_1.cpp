//Desafio 1 de Ordenação
//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include <time.h>
#include <iomanip>
#include <cmath>

#define QTD 99

using namespace std;

int gerarNumeros (int menor, int maior){
    return (menor + (rand()%maior));
}

void trocar(double vetor[], int i, int j)
{
    double temp = vetor[j];
    vetor[j] = vetor[i];
    vetor[i] = temp;
}

void ordenar(double vetor[]){
    for (int i = 0; i < QTD-1; i++) {
        for (int j = 0; j < QTD - i - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
                trocar(vetor, j, j+1);
            }
        }
    }
}

void imprimir(double vetor[])
{
    for (int i=0; i<QTD; i++){
        cout << vetor[i] << " - ";
    }

    cout << endl;
}

int main()
{
    double alunos[QTD];
    int alturas;
    int i, j;
    srand(time(NULL));

    for (i=0; i< QTD; i++){
        alturas = gerarNumeros(100,200);
        alunos[i] = floorf(alturas)/100; //me limita a 2 casas decimais de alturas;
    }

    cout << "Altura dos alunos:" << endl;
    imprimir(alunos);

    ordenar(alunos);

    cout << "Alturas ordenadas:" << endl;
    imprimir(alunos);

    return 0;
}
