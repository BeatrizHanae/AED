//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include <list>
#include <locale.h>
#include <bits/stdc++.h>


using namespace std;

class Lista {
	public:
		list<int> lista;
		void inserirElemento(int &elemento){
			lista.push_front(elemento);
			funcaoH(elemento);
		}
		int funcaoH(int &elemento){
			vector<int> posicao;
			posicao = (elemento%11);
			cout << posicao;
			return posicao;
		}
		void apresentarLista(vector<int>* posicao; int &elemento){
			int i =0;
			list<int>::iterator it;
			for (it = lista.begin(); it != lista.end();it++){
				if (posicao == elemento%11){
				cout << posicao << " "  << "[" << *it << "]" << "\t" ;
				cout << endl;
				}
			}
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
				Lst.apresentarLista(numero);
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
