#include <iostream>
#include <stack> //biblioteca para trabalhar com pilha

using namespace std;
/*O que é a pilha?
 Reposta: Um vector, armazenamento de estrutura de dados. A primeira informação que entra, é a última que sai. Assim como, a última informação que entra, é a primeira que sai.*/

int main(){
	
	stack <string> cartas; //criando a pilha, não precisa informar o tamanho;
	
	//Método empty: retorna booleano, verificando se a pilha está vazia.
	if(cartas.empty()){
		cout << "Pilha vazia" << endl;
	} else {
		cout << "Pilha com cartas!" << endl;
	}
	
	//adicionar elementos dentro de uma pilha; como parâmetro , incluindo o nome da carta que quero incluir;
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");  
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	//no topo da pilha está o REI DE PAUS, último elemento adicionado.
	//imprimir o tamanho da pilha, com o método size;
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n"; 
	
	//imprimir o elemento que está no topo:
	cout << "Carta do topo: " << cartas.top() << endl;
	
	//Excluir todos os elementos da pilha:
	while (!cartas.empyty()){ // o "!" é negação.
		cartas.pop();
	}
	//retirar um elemento de uma pilha, no caso retira o elemento do topo!
	cartas.pop();	
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n"; 
	
	cout << "Nova carta do topo: " << cartas.top() << endl;
	 
	return 0;
}

