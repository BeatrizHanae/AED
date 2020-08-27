//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include <list>
#include <locale.h>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

class Lista {
	public:
		list<int> lista;
		void inserirElemento(int &elemento){
			lista.push_front(elemento);
		//	funcaoH(elemento);
		}
/*		int funcaoH(int &elemento){
			vector<int> posicao;
				posicao = (elemento%11);
			return posicao;
		}*/
		void apresentarLista(int &qtd, int &elemento){
			int p;
			list<int>::iterator it;
			vector<int> posicao;
			for (it = lista.begin(); it != lista.end();it++){
				for (p=0; p < qtd  ; p++){
					if(posicao[p] = (elemento%11)){
						cout << posicao[p] << " "  << "[" << *it << "]" << "\t" ;	
						}
					}
				}
				cout << endl;
		}

	
}; //fim da classe




int main (){
	setlocale(LC_ALL,"Portuguese");
	Lista Lst;
	int opc, n, i;
	int numero;
	
	while (true){
		cout << "1- Inserir elemento. " << endl;
		cout << "2- Remover elemento. " << endl;
		cout << "3- Mostrar a configuração da tabela. " << endl;
		cout << "4- Sair." << endl;
		cin >> opc;
		switch(opc){
			case 1:{
				cout << "Quantos elementos deseja inserir?" << endl;
				cin >> n;
				cout << "Digite o numero de chaves que deseja inserir" << endl;
				for (i=0;i<n;i++){
					cin >> numero;
					Lst.inserirElemento(numero);
				}
				cout << endl;
				break;
			}
			case 2:{
				
				cout << endl;
				break;
			}
			case 3:{
				Lst.apresentarLista(n,numero);
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
