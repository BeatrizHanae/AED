//Beatriz Hanae Fujimoto - 160113814
//Desafio 2 - Grafos

#include <iostream>
#include <fstream>

using namespace std;

class Grafo{
	int V; 
	list <int> *adj;
};
int main(){
	int opc;
	fstream arquivo;
	int numero;
	
	while(opc!= 4){
		cout << "1- Mudar de Arquivo." << endl;
		cout << "2- Apresentar a Matriz de Adjacecia." << endl;
		cout << "3- Modificar a Matriz de Adjacencia." << endl;
		cout << "4- Sair." << endl;
		cin >> opc;
		switch(opc){
			case 1:{
				cout << "Qual arquivo deseja abrir?" << endl;
				
				break;
			}
			case 2:{
				arquivo.open("MatrizAdj1.txt", ios::in);
				if(arquivo.is_open()){
					while(getline(arquivo,numero)){
						cout << numero <<endl;
					}
				} else {
					cout << "Nao foi possivel abrir o arquivo" << endl;
				}
				break;
			}
			case 3{
				arquivo.open("MatrizAdj1.txt", ios::out) //permite modificar a matriz escrevendo no terminal.
				while
				break;
			}
		}
		
	}
	return 0;
} //final da main.
