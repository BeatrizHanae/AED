// Adrielle - 180096699
// DESAFIO 1 - ORDENACAO


#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include<iomanip>
using namespace std;

int main(){
	double alturas[100];		//vetor para armazenar numeros randomicos
	double  soma;
	double inteiro;
	double decimal;
	
	srand(time(NULL));		//srand
	int verdade, troca, continua;		//variaveis do algoritmo bouble sort
	verdade=1;	
	troca= 0;
	continua=1;
	double aux;
	
	cout << "NUMEROS ALEATORIOS" << endl;
	for (int n=0 ; n< 100 ; n++){ 	// for para gerar os numeros aleatorios
			soma=0;
			
			inteiro = 1+rand() % 3;		//gerando o inteiro
			soma= inteiro;
			decimal = (rand() % 99);		//decimal
			
			soma += ((decimal)/100); //somo o inteiro com o decimal/100
			
			alturas[n] = soma;
				
			cout << setprecision(3);		//mostrar o valor com 3 casas decimais
			cout << alturas[n] << ", ";
			
		
	}
	// ordenar
	cout << "\n\n NUMEROS ORDENADOS"<<endl;	
	//algoritmo de ordenaão bouble sort
	while(continua==1){		
			troca=0;
		for(int i=0 ; i<99 ; i++){	
		
			if (alturas[i] > alturas[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux = alturas[i+1];
				alturas[i+1] = alturas[i];
				alturas[i] = aux;
				troca = 1;
			}
	
		}
		if(troca == 0){
			continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}
		
		
	}
//dando cout nos numeros ordenados
	for (int a =0 ; a<100 ; a++){
		cout << alturas[a] << ", ";
	}
	
	
	return 0;
	
	
	
	
}

