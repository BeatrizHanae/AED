#include <stdio.h>
#include <stdlib.h>

int main (void){
    int vetor [2];
    int *v; // ponteiro
    v = vetor;
    v[0] = 123;
    v[1] = 456;
    printf ("vetor[0] = %d\n", vetor[0]);
    printf ("vetor[1] = %d\n\n", vetor[1]);
    system ("pause");
}

/*Terminal:
vetor[0] = 123
vetor[1] = 456  
*/
