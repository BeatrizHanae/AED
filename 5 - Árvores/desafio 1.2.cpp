//DESAFIO 2 ARVORES PARTE 1
//Beatriz Hanae - 160113814

#include<iostream>
#include<locale.h>
#include<set>
#include<list>
#include<string>
#include<fstream>

using namespace std;

class animal{
	public:
		
	//inicializei duas arvores para separar o canil1 do canil2 
		
	set<string>canil1; 
	set<string>canil2;
	
	int aux1, n, n1, aswr, aswr1;
	string raca1, raca2, busca1, busca2;
	
	void inserir(){
		cout << "INSERIR PETS" << endl << endl;
		cout << "1- Canil 1" << endl;
		cout << "2- Canil 2" << endl;
			cin >> aux1;
		cout << endl;
				
		if(aux1 == 1){
			cout << "CANIL 1"<< endl;
			cout << "Quantos pets serão cadastrados?" << endl;
				cin >> n;
			cout << endl;
			
			for(int i=0; i<n; i++){
				cout << "Raça " << i+1 << " : ";
					cin.ignore();
					getline(cin, raca1);
					canil1.insert(raca1); //inserindo na arvore 
			}
		}
		
		if(aux1 == 2){
			cout << "CANIL 2"<< endl;
			cout << "Quantos pets serão cadastrados?" << endl;
				cin >> n1;
			cout << endl;
			
			for(int i=0; i<n1; i++){
				cout << "Raça " << i+1 << " : ";
					cin.ignore();
					getline(cin, raca2);
					canil2.insert(raca2); //inserindo na arvore 
			}
		}
		
	}
	
	void busca(){ //função para busca 
		cout << "BUSCA POR PET" << endl << endl;
		cout << "1- Canil 1" << endl;
		cout << "2- Canil 2" << endl;
			cin >> aswr;
		cout << endl;
		
		if(aswr == 1){ //para o canil 1
			cout << "Digite a raça que você deseja buscar: " << endl;
				cin.ignore();
				getline(cin, busca1);
				
			if (canil1.find(busca1)!=canil1.end()){ //busca por meio de uma arvore usando um metodo da biblioteca set 
				cout << "O PET " << busca1 << " foi encontrado" << endl;
			}
			else{
				cout << "O PET " << busca1 << " NÃO foi encontrado" << endl;
			}
		}
		
		if(aswr == 2){ //para o canil 2
			cout << "Digite a raça que você deseja buscar: " << endl;
				cin.ignore();
				getline(cin, busca2);
				
			if (canil2.find(busca2)!=canil2.end()){ //busca por meio de uma arvore usando um metodo da biblioteca set 
				cout << "O PET " << busca2 << " foi encontrado" << endl;
			}
			else{
				cout << "O PET " << busca2 << " NÃO foi encontrado" << endl;
			}
		}
	}
	
	void organizar(){ //ordenar pets pelas raças 
		cout << "REOGARNIZAR CANIS " << endl << endl;
		cout << "1- Canil 1" << endl;
		cout << "2- Canil 2" << endl;
			cin >> aswr1;
		cout << endl;
		
		if(aswr1 == 1){
			cout << "PETS ORDENADOS DO CANIL 1: " << endl;
			for(set<string>::iterator it = canil1.begin(); it!=canil1.end(); it++){ //ordenando por meio da arvore 
				cout << *it << "\t";
			}
		}
		
		if(aswr1 == 2){
			cout << "PETS ORDENADOS DO CANIL 2: " << endl;
			for(set<string>::iterator it1 = canil2.begin(); it1!=canil2.end(); it1++){ //ordenando por meio da arvore 
				cout << *it1 << "\t";
			}	
		}
	}
	
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	animal pets;
	
	int aux;
	
	inicio:
	cout << "\tOrganização de uma ONG" << endl;
	cout << "Seleciona a opção desejada:" << endl;
	cout << "1- Cadastrar pets" << endl;
	cout << "2- Buscar por pet" << endl;
	cout << "3- Ordenar pets" << endl;
	cout << "4- Sair" << endl;
		cin >> aux;
		
	switch(aux){
		case 1:
			pets.inserir();
			break;
		case 2:
			pets.busca();
			break;
		case 3:
			pets.organizar();
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
