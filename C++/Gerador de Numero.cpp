//Gerador de n�meros aleat�rios

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	int i, j;
	
	srand(time(NULL)); //roda por tempo, a cada execu��o muda os n�meros;
	
	for (i=0;i<25;i++){ 
		cout << rand () << endl ; //vai gerar 25 n�meros inteiros aleatorios
	}

	for (j=0; j < 25; j++){
		cout << 100+ (rand()%300) << endl; //gera 25 numeros de 1 a 6;
	}


	return 0;
}
