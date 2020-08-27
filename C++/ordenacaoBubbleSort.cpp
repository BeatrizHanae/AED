//Bubblr sort 

#include <iostream>

using namespace std;

void bubbleSort (int vet[], int n){ //recebe um vetor e o tamanho do vetor;
	int i, j, aux;
	
	for (i=0; i<n; i++){ //la�o externo
		for (j=0; j<n-1; j++){ //la�o interno
		/*Exemplo: vetor = 3,1,5,2,4
		primeiro la�o: 
			compara os numeros vet[0] = 3 e vet[1]=1
			armazena na aux = 3 -> aux = vet[0];
			troca: vet[0] = vet[1] -> vet[0] = 1 E vet[1] = aux -> vet[1]= 3; */
			if (vet[j] > vet[j+1]){ 	//nessa compara��o, estamos verificando se o primeiro numero do vetor vet[0] � maior que o segundo vet[1]
				aux = vet[j]; 			//armazeno o primeiro numero do vetor, vet[0], na vari�vel aux
				vet[j] = vet[j+1];		//momento da troca, quando coloco o segundo numero, vet[1], no lugar do vet[0]
				vet[j+1] = aux;  		//momento da troca, quando coloca o primeiro numero na posi��o vet[1]
		}
	}
}
