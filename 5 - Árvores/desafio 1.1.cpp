//DESAFIO 1 ARVORES PARTE 1
//Beatriz Hanae - 160113814

#include<iostream>
#include<locale.h>  
#include<set>
#include<string>
#include<fstream>

using namespace std; 

class familia{
	public:
		
		set<string>nomes;
		
		string nome1[100];
		string deleta;
		string busca;
		string mudanca;
		string novo;
		
		ofstream escreve; //para escrita em arquivo
		ifstream le; //para leitura do arquivo 
		
		void inserir(){ //FUNÇÃO PARA INSERIR MEMBRO NA ARVORE 
			cout << "Inserir membro: " << endl;
				cin.ignore();
				getline(cin,nome1[100]);
				
				escreve.open("familia.txt");
				
				escreve << nome1[100] << endl;
				
				nomes.insert(nome1[100]); //inserindo dentro da arvore
		}
		
		void excluir(){ //FUNÇÃO PARA EXCLUIR UM MEMBRO NA ARVORE 
			cout << "Digite o nome do membro que você deseja excluir" << endl;
				cin.ignore();
				getline(cin, deleta);
				
				nomes.erase(deleta);
		}
		
		void buscar(){ //FUNÇÃO PARA BUSCAR UM MEMBRO NA ARVORE 
			cout << "Digite o nome que você deseja realizar busca:" << endl;
				cin.ignore();
				getline(cin, busca);
				
				if (nomes.find(busca)!=nomes.end()){ //busca por meio de uma arvore usando um metodo da biblioteca set 
					cout << "O membro " << busca << " foi encontrado" << endl;
				}
				else{
					cout << "O membro " << busca << " NÃO foi encontrado" << endl;
				}	
		}
		
		void mudar(){
			cout << "Digite o nome do membro que você deseja realizar a mudança de nome: " << endl;
				cin.ignore();
				getline(cin, mudanca);
				
			cout << endl;
			
			for(set<string>::iterator it = nomes.begin(); it!=nomes.end(); it++){ //ordenando por meio da arvore 
				if(*it == mudanca){
					
					//*it = ' ';
					//nomes.erase();
	
					cout << "Realizar mudança" << endl;
					cout << "Digite o novo nome: " << endl;
						cin.ignore();
						getline(cin, novo);
						nomes.insert(it, novo);
							
				}
			}
			
			cout << endl << endl;
			for(set<string>::iterator it = nomes.begin(); it!=nomes.end(); it++){ //ordenando por meio da arvore 
				cout << *it << "\t";
			}
		}
		
		
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	familia pessoas;
	
	int aux;
	
	inicio:
	cout << "ARVORE GENEALOGICA" << endl << endl;
	cout << "Selecione uma opção abaixo: " << endl;
	cout << "1- Adicionar membro" << endl;
	cout << "2- Excluir membro" << endl;
	cout << "3- Mudar nome" << endl;
	cout << "4- Buscar por membro" << endl;
	cout << "5- Sair" << endl << endl;
		cin >> aux;
		
	switch(aux){
		case 1:
			pessoas.inserir();
			break;
		case 2:
			pessoas.excluir();
			break;
		case 3:
			pessoas.mudar();
			break;
		case 4:
			pessoas.buscar();
			break;
		case 5:
			exit(5);
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
