#include <iostream>
#include <bits/stdc++.h>

using namespace std;

	int main(){
		vector <string> modelo;
		string modeloAuxiliar;
		float consumo, quilometragem;
		int opc, N, i;
		
		cout << "Quantos carros voce gostaria de incluir??" << endl;
		cin >> N;
		
		while (true){
			
			cout << "1- Incluir carros." << endl;
			cout << "2- Listar os carros ja cadastrados." << endl;
			cout << "3- Mostrar o carro mais econômico e o custo." << endl;
			cin >> opc;
				switch (opc){
					case 1:{
						for (i=0; i < N ; i++){
							cin >> modelo.push_back(modeloAuxiliar);
							cin >> consumo;
							cin >> quilometragem;
							
						}
						break;
					}
					case 2:{
						for (i=0; i<N; i++){
							cout << modelo <<", "<< endl;
							cout << consumo << ", " <<endl;
							cout << quilometragem << ".\n"<< endl;
						}
						break;
					}
				}
		}
		return 0;
	}
