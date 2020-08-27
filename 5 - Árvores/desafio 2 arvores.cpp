//desafio 2
//Orgonograma de uma empresa
//Adrielle - 18/0096699
//Beatriz - 16/0113814
//Letícia - 18/0104896

#include<iostream>
#include<locale.h>
#include<set>
#include<string>

using namespace std;

class arvore{

	public:
		set<string>arvoreBinaria; //criando a arvore usando metodo set 

		int d=1 , da= 3, dc= 2, v=4, gm=5, gc=6, cc=7;

		string nome[9]={ " "};

		//sabemos os ID de cada hierarquia 

		string nome_d, nome_da, nome_dc, nome_v, nome_gm, nome_gc, nome_cc; //variaveis de nome para cada função 

		void inserir(){
			cout << "DONO" << endl;
			cout << "Insira o nome:";
				cin >> nome_d;
				
			arvoreBinaria.insert(nome_d); //inserindo dentro da arvore 

			nome[1]=nome_d;  //guardando um nome num vetor 

			cout << endl;

			cout << "DIRETOR COMERCIAL" << endl;
			cout << "Insira o nome:";
				cin >> nome_dc;	

			arvoreBinaria.insert(nome_dc);  //inserindo dentro da arvore 

			nome[2]= nome_dc;  //guardando um nome num vetor 

			cout << endl;
		
			cout << "DIRETOR ADMINISTRATIVO" << endl;
			cout << "Insira o nome:";
				cin >> nome_da;

			nome[3]= nome_da;	 //guardando um nome num vetor 

			arvoreBinaria.insert(nome_da); //inserindo dentro da arvore 

			cout << endl;

			cout << "VENDEDOR" << endl;
			cout << "Insira o nome:";
				cin >> nome_v;

			arvoreBinaria.insert(nome_v); //inserindo dentro da arvore 

			nome[4]= nome_v;  //guardando um nome num vetor 

			cout << endl;

			cout << "GERENTE DE MARKETING" << endl;
			cout << "Insira o nome:";
				cin >> nome_gm;
				
			arvoreBinaria.insert(nome_gm); //inserindo dentro da arvore 

			nome[5]= nome_gm;  //guardando um nome num vetor 

			cout << endl;

			cout << "GERENTE DE COBRANÇA" << endl;
			cout << "Insira o nome:";
				cin >> nome_gc;
				
			arvoreBinaria.insert(nome_gc); //inserindo dentro da arvore 

			nome[6]= nome_gc;  //guardando um nome num vetor 

			cout << endl;	

			cout << "GERENTE DE CONTRATOS"	<< endl;		
			cout << "Insira o nome:";
				cin >> nome_cc;

			arvoreBinaria.insert(nome_cc); //inserindo dentro da arvore 

			nome[7]= nome_cc;  //guardando um nome num vetor 

			cout << endl;
		}


		void buscar(){ //FUNÇÃO DE BUSCA DE UM FUNCIONARIO 
			
			string busca;

			cout << "Entre com o nome que você deseja verificar se está no quadro de funcionarios" << endl;
				cin >> busca;

			if (arvoreBinaria.find(busca) != arvoreBinaria.end()){
				cout << "O nome " << busca << " está presente no quadro de funcionarios!" << endl;
			}

			else{
				cout << "O nome " << busca << " NÃO está presente no quadro de funcionarios!" << endl;
			}
		}

		void mostrar(){ //FUNÇÃO PARA MOSTRAR A ÁRVORE 

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){ //usando iterator lendo do inicio até o fim da arvore 
				if(nome[1]== *it){
					cout << "\t\t\t\t\t\t\t\tDiretor: " << *it << endl; //da cout no dono 
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[2]== *it){
					cout << "\t\tDiretor Comercial: " << *it <<" ";
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[3]== *it){
					cout << "\t\t\t\t\t         Diretor Administrativo: " << *it << endl;
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[4]== *it){
					cout << "Vendedor: " << *it << " ";
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[5]== *it){
					cout << "\t\t\tGerente de Marketing: " << *it << " ";
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[6]== *it){
					cout << "\t\t\tGerente de Cobrancas: " << *it << " ";
				}
			}

			for(set<string>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				if(nome[7]== *it){
					cout << "\t\tGerente de Contratos: " << *it << endl;
				}
			}
			cout << endl;
		}
};


int main(){

	setlocale(LC_ALL,"Portuguese");

	arvore empresa; //instanciando o objeto 

	int aux;

	inicio:
	cout << "Menu: " << endl;
	cout << "1- Inserir informações " << endl;
	cout << "2- Buscar " << endl;
	cout << "3- Quadro de Funcionarios" << endl;
	cout << "4- Sair" << endl;
	cout << endl;
	cout << "Escolha uma das opções acima: " << endl;
		cin >> aux;
	cout << endl << endl;
	switch(aux){
		case 1:
			empresa.inserir();
			break;
		case 2:
			empresa.buscar();
			break;
		case 3:
			empresa.mostrar();
			break;
		case 4:
			exit(4);
			break;	
	}

	char aux_2;
	cout << endl;
	cout << "Deseja voltar ao menu? (s/n)" << endl;
		cin >> aux_2;

		if(aux_2 == 's' || aux_2 == 'S'){
			system("cls");
			cout << endl << endl;
			goto inicio; //voltará ao menu 
		}
		else {
			system("pause");
		} 
	return 0;
}
