//DESAFIO 2 ORDENAÇÃO
//LETÍCIA FERNANDES RIOS
//180104896

#include<iostream>
#include<iomanip>
#include<locale.h>

using namespace std;

class escola{
	public:
		
	//para fisica
	double nota1[8]= {5.5, 6.6, 8.0, 3.0, 4.0, 10.0, 7.2, 2.4};
	string nome1[8]= {"Miguel", "Sophia", "Davi", "Alice", "Arthur", "Julia", "Pedro", "Isabela"};
	
	//para biologia
	double nota2[8]= {9.2, 4.2, 6.2, 7.8, 9.4, 8.1, 3.2, 1.8};
	string nome2[8]= {"Lorenzo", "Lara", "Gustavo", "Mariana", "Felipe", "Nicole", "Samuel", "Rafaela"};
	
	//para quimica
	double nota3[8]= {5.2, 4.7, 7.3, 8.2, 2.7, 3.8, 9.4, 8.2};
	string nome3[8]={"Gabriel", "Manuela", "Bernardo", "Laura", "Lucas", "Luiza", "Matheus", "Valentina"};

	//variaveis para o algortimo de bouble sort 
	bool continua, troca, troca1;
	string aux1;
	double aux2;
	
	//este programa contera funções para ordenar em ordem o nome, tanto para fisica, quimica e biologia, e funções para ordenar as notas para as 3 materias 
	
	void crescente_nome1(){

	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nome1[i] > nome1[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome1[i+1];
				nome1[i+1] = nome1[i];     //ordenando o nome
				nome1[i] = aux1;
				troca = true;
				
				aux2 = nota1[i+1];
				nota1[i+1] = nota1[i];    //fazendo com o que a nota siga o nome ordenado 
				nota1[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	
		for (int i=0 ; i<8 ; i++){   //ira dar cout no nome ordenando seguido da nota correta 
			cout << "ALUNO: " << nome1[i] << "  " << "NOTA: " << nota1[i] << endl;
		}		
	}
		
	void crescente_nome2(){

	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nome2[i] > nome2[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome2[i+1];
				nome2[i+1] = nome2[i];   //ordenando nome
				nome2[i] = aux1;
				troca = true;
				
				aux2 = nota2[i+1];
				nota2[i+1] = nota2[i];   //fazendo com o que a nota siga o nome ordenado 
				nota2[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	
		for (int i=0 ; i<8 ; i++){  //ira dar cout no nome ordenando seguido da nota correta 
			cout << "ALUNO: " << nome2[i] << "  " << "NOTA: " << nota2[i] << endl;
		}		
	}
		
	void crescente_nome3(){

	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nome3[i] > nome3[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome3[i+1];
				nome3[i+1] = nome3[i];    //ordenando nome 
				nome3[i] = aux1;
				troca = true;
				
				aux2 = nota3[i+1];
				nota3[i+1] = nota3[i];   //fazendo com o que a nota siga o nome ordenado 
				nota3[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	
		for (int i=0 ; i<8 ; i++){  //ira dar cout no nome ordenando seguido da nota correta 
			cout << "ALUNO: " << nome3[i] << "  " << "NOTA: " << nota3[i] << endl;
		}		
	}	

void crescente_nota1(){
	
	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca1 = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nota1[i] > nota1[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome1[i+1];
				nome1[i+1] = nome1[i];    //fazendo com o que o nome  siga a nota  ordenada 
				nome1[i] = aux1;
				troca = true;
				
				aux2 = nota1[i+1];
				nota1[i+1] = nota1[i];   //ordenando nota 
				nota1[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca1 == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	
		for (int i=0 ; i<8 ; i++){  //cout para mostrar a nota ordenada seguido do  nome correto 
			cout << "ALUNO: " << nome1[i] << "  " << "NOTA: " << nota1[i] << endl;
		}			
}
		
void crescente_nota2(){
	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca1 = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nota2[i] > nota2[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome2[i+1];
				nome2[i+1] = nome2[i];
				nome2[i] = aux1;         //fazendo com o que o nome  siga a nota  ordenada 
				troca = true;
				
				aux2 = nota2[i+1];
				nota2[i+1] = nota2[i];    //ordenando nota 
				nota2[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca1 == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	
		for (int i=0 ; i<8 ; i++){    //cout para mostrar a nota ordenada seguido do  nome correto 
			cout << "ALUNO: " << nome2[i] << "  " << "NOTA: " << nota2[i] << endl;
		}			
}

void crescente_nota3(){
	
	continua = 1; //variável que mantem a o lopp rodando até que o vetor seja organizado
	
	while(continua == true){
		troca1 = false;
		
		for(int i=0 ; i<7 ; i++){

			if (nota3[i] > nota3[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				
				aux1 = nome3[i+1];
				nome3[i+1] = nome3[i];
				nome3[i] = aux1;          //fazendo com o que o nome  siga a nota  ordenada 
				troca = true;
				
				aux2 = nota3[i+1];
				nota3[i+1] = nota3[i];     //ordenando nota 
				nota3[i] = aux2;
				troca1 = true;
				
			}
		}
		
		if(troca1 == false){
			continua = false;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
		}	
	}
	 
		for (int i=0 ; i<8 ; i++){     //cout para mostrar a nota ordenada seguido do  nome correto 
			cout << "ALUNO: " << nome3[i] << "  " << "NOTA: " << nota3[i] << endl;
		}			
}		
};

	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int aux;
	
	escola disciplina;
	
	inicio:
	cout << "NOTAS DOS ALUNOS PARA: " << endl;
	cout << "1- FISICA" << endl;
	cout << "2- BIOLOGIA" << endl;
	cout << "3- QUIMICA" << endl;
	cout << endl;
	cout << "Escolha uma matéria: " << endl;
		cin >> aux;
		
	switch(aux){
		case 1:
			
			cout << "ORDENADO POR NOME: " << endl<< endl;
			disciplina.crescente_nome1();
			cout << endl << endl;
			cout << "ORDENADO POR NOTA: " << endl << endl;
			disciplina.crescente_nota1();
			
			break;
			
		case 2:
			cout << "ORDENADO POR NOME: " << endl << endl;
			disciplina.crescente_nome2();
			cout << endl << endl;
			cout << "ORDENADO POR NOTA: " << endl << endl;
			disciplina.crescente_nota2();
			
			break;
			
		case 3:
			cout << "ORDENADO POR NOME: " << endl << endl;
			disciplina.crescente_nome3();
			cout << endl << endl;
			cout << "ORDENADO POR NOTA: " << endl << endl;
			disciplina.crescente_nota3();
			
			break;	
	}
	
		char aux_2;
		cout << endl;
		cout << "Deseja voltar ao menu? (s/n)" << endl;
			cin >> aux_2;
				
			if(aux_2 == 's' || aux_2 == 'S'){
				system("cls");
				goto inicio;
			}
			else {
				system("pause");
			}	
	return 0;
}
