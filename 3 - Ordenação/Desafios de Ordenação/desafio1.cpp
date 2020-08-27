#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

int gerarNumeros (int menor, int maior){
	return (menor + (rand()%maior));
}

void ordenar(double vetor[]){

	int i, j;
	double aux;
	bool continua, troca;
	continua = 1;
	
	while(continua == true){

		troca = false;
		
		for(i=0 ; i<99 ; i++){
			if (vetor[i] > vetor[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
				troca = true;
			}
		}
			if(troca == false){
				continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
		
		}
		for (i=0; i<99; i++){
			cout << vetor[i] << " - ";
		}
}

int main(){
	double alunos[99];
	int alturas;
	int i, j;
	srand(time(NULL));
	
	for (i=0; i< 99; i++){
		alturas = gerarNumeros(100,200);
		alunos[i] = floorf(alturas)/100; //me limita a 2 casas decimais de alturas;
		cout << alunos[i] << " - ";
	}
	
	cout << "\nOrdenando: \n";
	ordenar(alunos);
	return 0;
}
