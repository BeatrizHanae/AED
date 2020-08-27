//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include<locale.h>
#include<string>
#include<list>
#include<queue>

#define QTD 5

using namespace std;

class Cliente {
	public:
		list <string> nome;
		list<string>:: iterator itnome;
		
		list<int> idade;
		list<int>::iterator itidade;
		
		list<string> categoria;
		list<string>::iterator itcategoria;
		
		string nomeAux, bancoAux;
		int idadeAux;
		
		void cadastrar(){
			int i =0;
			if (i < QTD)
			cout << "Bem vindo. Insira os dados abaixo: " << endl;
			
			cout << "Nome: ";
			cin >> nomeAux;
			cout << "Idade: ";
			cin >> idadeAux;
			cout << "Categoria: ";
			cin >> bancoAux;
			
			nome.push_front(nomeAux);
			idade.push_front(idadeAux);
			categoria.push_front(bancoAux);
			i++;
		}
		
		void prioridade(){
			idade.sort();
			idade.reverse();
			
			itidade = idade.begin();
			itcategoria = categoria.begin();
			
			for (itnome = nome.begin(); itnome != nome.end(); itnome++){
				if (*itidade >= 60){
				//	if (*itcategoria == )
					cout << "Nome: " << *itnome
						 << "Idade: " << *itidade
						 << "Categoria: " << *itcategoria << endl;
					cout << endl;
				}
				itidade++;
				itcategoria++;
			}
			
			categoria.sort();
			categoria.reverse();
			
			itidade = idade.begin();
			itcategoria = categoria.begin();
			
			for (itnome = nome.begin(); itnome != nome.end(); itnome++){
				if ( *itidade<60){
					if(*itcategoria == "Black"){
						cout << "Nome: " << *itnome
							 << "Idade: " << *itidade
							 << "Categoria: " << *itcategoria << endl;
					} else if (*itcategoria == "Gold"){
						cout << "Nome: " << *itnome
							 << "Idade: " << *itidade
							 << "Categoria: " << *itcategoria << endl;
					} else if (*itcategoria == "Silver"){
						cout << "Nome: " << *itnome
							 << "Idade: " << *itidade
							 << "Categoria: " << *itcategoria << endl;
					}
					cout << endl;
				}
				
				itidade++;
				itcategoria++;
			}
		}
		void listaAlfabetica (){
			int i = 0;
			nome.sort();

			itidade = idade.begin();
			itcategoria = categoria.begin();
			
			for (itnome = nome.begin(); itnome != nome.end(); itnome++){
			cout << "Nome: " << *itnome  << " - "
				 << "Idade: " << *itidade << " - "
				 << "Categoria: " << *itcategoria << endl;
			itidade++;
			itcategoria++;		
			}
		}
}; //fim da classe




int main (){
	setlocale(LC_ALL,"Portuguese");
	Cliente usuario;
	int opc;
	
	while (true){
		cout << "1- Cadastrar cliente. " << endl;
		cout << "2- Mostrar ordem da fila de atendimento. " << endl;
		cout << "3- Mostrar todos os clientes em ordem alfabetica. " << endl;
		cout << "4- Sair." << endl;
		cin >> opc;
		switch(opc){
			case 1:{
				usuario.cadastrar();
				cout << endl;
				break;
			}
			case 2:{
				usuario.prioridade();
				cout << endl;
				break;
			}
			case 3:{
				usuario.listaAlfabetica();
				break;
			}
			case 4:{
				exit(4);
				break;
			}
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
} //fim da main.
