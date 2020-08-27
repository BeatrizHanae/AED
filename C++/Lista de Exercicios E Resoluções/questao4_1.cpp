#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Carro {
	
		string nome, cor, marca;
		int telefone, placa;
	
	public:
	
	void imprime_carro(){
		cout << "Nome: " << nome
			 << "\nTelefone: " << telefone
			 << "\nMarca: " << marca
			 << "\nPlaca: " << placa
			 << "\nCor: " << cor
			 << endl;
	}
	
	void setNome(string n){
		nome = n;
	}
	void setTelefone(int t){
		telefone = t;
	}
	void setMarca(string m){
		marca = m;
	}
	void setPlaca(int p){
		placa = p;
	}
	void setCor(string c){
		cor = c;
	}
};

int main (){
	int tel, pl, i, numero_de_vagas, opcao;
	string nm, mc, cor;
	vector<Carro> carros;
	Carro carroAux;
	
	cout << "Digite a quantidade de vagas:" << endl;
	cin >> numero_de_vagas;
	
		while(true){
			cout << "1 - Registrar carros" << endl;
			cout << "2 - Listar carros" << endl;
			cout << "3 - Sair" << endl;
			cin>>opcao;
			
				switch(opcao){
					case 1 :{
						for (i=0; i < numero_de_vagas; i++){
							cout << "Digite o nome do cliente: " << endl;
							cin >> nm;
								
							cout << "Digite o telefone do cliente: " << endl;
							cin >> tel;
							
							cout << "Digite a marca do carro: " << endl;
							cin >> mc;
							
							cout << "Digite a placa do carro: " << endl;
							cin >> pl;
							
							cout << "Digite a cor do carro: " << endl;
							cin >> cor;
							
										
							carroAux.setNome(nm);
							carroAux.setTelefone(tel);
							carroAux.setMarca(mc);
							carroAux.setPlaca(pl);
							carroAux.setCor(cor);
							
							carros.push_back(carroAux);
					}
						break;
				}
				case 2 :{
					for (i=0; i < numero_de_vagas; i++){
						carros[i].imprime_carro();
					}	
					break;
				}

				case 3 : {
					exit(3);
					break;
				}
		}
	}
	return 0;
}
