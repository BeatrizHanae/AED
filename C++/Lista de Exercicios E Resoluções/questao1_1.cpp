//Questão 1
//Beatriz Hanae Fujimoto - 160113814

#include <iostream>
#include <stdio.h>

using namespace std;

class Agenda {
	
	private: 
		int telefone;
		string nome;
	
	int getTelefone(){
		return telefone;
	}
	string getNome(){
		return nome;
	}
	public: void setTelefone(int t){
		telefone = t;
	}
	public:	void setNome (string n){
		nome = n;
	}
	
	public: void imprime(){
		cout << "Telefone: " << telefone
			 << "Nome: " << nome << endl;
	}
		
};


int main(){
	
	int tel, numero;
	string nome;
	Agenda agenda[numero];

	cout << "Quantos contatos voce deseja registrar?" << endl;
	cin >> numero;
	
	cout << "Bem vinda a Agenda Eletronica, o que deseja fazer?" << endl;
		while(true){
			int opcao;
				cout << "1 - Consultar os contatos." << endl;
				cout << "2 - Criar um novo contato." << endl;
				cout << "3 - Sair." << endl;
			cin >> opcao;
				switch(opcao){
					case 1:{
						int i;
						for(i=0; i < numero; i++){
							agenda[i].imprime();
						}
						break;
					}
					case 2:{
						int i;
						for (i=0;i < numero ; i++){
							cout << "Digite o telefone: " << endl;
							cin >> tel;
							cout << "Digite o nome: " << endl;
							cin >> nome;
							
							agenda[i].setTelefone(tel);
							agenda[i].setNome(nome);
						}
						break;
					}
					case 3:{
						exit(3);
						break;
					}
				}
		}
			
	return 0;
}
