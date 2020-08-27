/*O que é uma fila?
	Resposta: um vector, armazenamento de estrutura de dados. O primeiro elemento que entra, é o primeiro que sai também. */

#include <iostream>
#include <queue> //biblioteca de fila


using namespace std;

int main (){
	
	//métodos principais para trabalhar com as filas: empty, size, front, back, push, pop;
	queue <string> cartas;
	
	cartas.push("Rei de Copas"); // inserir o elemento dentro da fila;
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da fila: " << cartas.size() << "\n" ; //tamanho da fila o .size();
	cout << "Primeira Carta: " << cartas.front() << "\n"; //imprime o primeiro elemento da fila;
	cout << "Ultima Carta: " << cartas.back() << "\n\n"; //imprimir quem é o ultimo elemento da fila;
	
	while (!cartas.empty()){
		cout << "Primeira Carta: " << cartas.front() << "\n"; //mostra quem está na frente da fila;
		cartas.pop(); // remove sempre a carta que esta na frente da fila;
	}
 	
	return 0;
}
