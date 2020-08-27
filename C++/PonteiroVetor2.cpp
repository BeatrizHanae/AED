#include <stdio.h>
#include <stdlib.h>
   
#define MAX 10

int main (void){
    int vetor [MAX], i, valor;
	int *v; //ponteiro
    v = &vetor[0]; // o ponteiro esta pegando o endereço de onde esta a minha informação.
    printf ("Digite um valor para ser gravado no\n");
    printf ("indice\t|Endereco de Memoria\n");
    for (i=0; i<MAX; i++) {
        printf ("[%d]     | %p\t\t-> ", i, (v+i)); // mostra o endereço na memoria da posição;
        scanf ("%d", &valor);
        getchar(); //ler um único caractere 
        *(v+i) = valor; //valor é gravado no endereço apontado pelo ponteiro
    }
    system ("cls");
    printf ("Os valores gravados no vetor foram:\n");
    for (i=0; i<MAX; i++) {
        printf("vetor[%d], ponteiro (%p) = %d\n", i, (v+i), vetor[i]);
    }
    system ("pause");
}

/*Terminal:
Digite um valor para ser gravado no            
indice   |Endereco de Memoria 
 [0]     |000000000062FDE0                ->   

Os valores gravados no vetor foram:           
vetor[0], ponteiro (000000000062FDE0) = 96    
vetor[1], ponteiro (000000000062FDE4) = 8765  
vetor[2], ponteiro (000000000062FDE8) = 8765  
vetor[3], ponteiro (000000000062FDEC) = 654   
vetor[4], ponteiro (000000000062FDF0) = 45678 
vetor[5], ponteiro (000000000062FDF4) = 24354656  
vetor[6], ponteiro (000000000062FDF8) = 98329    
vetor[7], ponteiro (000000000062FDFC) = 1298291 
vetor[8], ponteiro (000000000062FE00) = 120981                                                                          
vetor[9], ponteiro (000000000062FE04) = 131  
*/
