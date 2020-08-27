#include <iostream>
#include <stack> //biblioteca para trabalhar com pilha

using namespace std;
/*O que � a pilha?
 Reposta: Um vector, armazenamento de estrutura de dados. A primeira informa��o que entra, � a �ltima que sai. Assim como, a �ltima informa��o que entra, � a primeira que sai.*/

int main(){
	
	stack <string> cartas; //criando a pilha, n�o precisa informar o tamanho;
	
	//M�todo empty: retorna booleano, verificando se a pilha est� vazia.
	if(cartas.empty()){
		cout << "Pilha vazia" << endl;
	} else {
		cout << "Pilha com cartas!" << endl;
	}
	
	//adicionar elementos dentro de uma pilha; como par�metro , incluindo o nome da carta que quero incluir;
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");  
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	//no topo da pilha est� o REI DE PAUS, �ltimo elemento adicionado.
	//imprimir o tamanho da pilha, com o m�todo size;
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n"; 
	
	//imprimir o elemento que est� no topo:
	cout << "Carta do topo: " << cartas.top() << endl;
	
	//Excluir todos os elementos da pilha:
	while (!cartas.empyty()){ // o "!" � nega��o.
		cartas.pop();
	}
	//retirar um elemento de uma pilha, no caso retira o elemento do topo!
	cartas.pop();	
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n"; 
	
	cout << "Nova carta do topo: " << cartas.top() << endl;
	 
	return 0;
}

