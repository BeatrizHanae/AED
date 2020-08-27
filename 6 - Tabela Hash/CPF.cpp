#include <stdio.h>
#include <stdlib.h>

struct pessoa{
	char nome[30];
	int cpf[7];
};
typedef struct pessoa lista[50];


void inserir(){
	int cpf1[7], i;
	printf("\n informe o cpf de 8 digitos :  ");
	scanf("%d",&cpf1);
	printf("\n\n\n");
	printf("%d confirmado ",cpf1);
	if(cpf1[0]<5){
		printf("\n insercao no inicio");
		for(i=1;i<26;i++){ // o primeiro elemento esta vazio começa de 1
		if(lista[i]== NULL){
			printf("\n informe um nome");
			scanf("%c",&lista.nome);
			printf("\n confirmado o cpf %d",cpf1);
			lista.cpf=cpf1;
			break;
		}
		else{
			printf("\n posicao ocupada.. verificando proxima posicao disponivel");
		}//else
	}//for
}//procedimento

int main(){
	int escolha;
	printf("\n #### TABELA HASH ####\n");
	printf("\n informe uma opcao \n 1- inserir \n 2-mostrar todos \n 3-excluir um item\n\n");
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		inserir();
		break;
		case 2:
		printf("\n em desenvolvimento");
		break;
		case 3:
		printf("\n funcionalidade em desenvolvimento");
		break;
		default:
		printf("\n opcao invalida");
		break;

	}

	system("pause");
}
