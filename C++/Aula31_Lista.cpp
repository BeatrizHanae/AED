#include <iostream>
#include <list> //biblioteca de lista;

using namespace std;

int main() {
	
	list <int> aula;	// modos de declara��es: aula(50), quer dizer 50 posi��es. se for aula(5,50): quer dizer 5 posi��es e o valor das 5 posi��es � 50.
	int tam; 
	list <int>::iterator it; //ele me auxilia a inserir ou deletar um elemento no meio da lista;
	
	tam = 10 ;

	for (int i=0; i<tam; i++){ //inserir os valores da lista
		aula.push_front(i);
	}	
	
	/* it=aula.begin(); //no inicio da lista;
	advance(it,5); //ele avan�a as casas para inserir o elemento , o iterator e as casas;
	
	aula.insert(it,0); //posi��o do iterator, valor a ser inserido; */
	
	/*sort -> ordena a lista
	aula.sort();*/
	
	/*reverse -> inverter a ordem da lista ordenada ou n�o;*/
	
	/* it=aula.begin();
	advance(it,3);
	aula.insert (it,0);
	aula.erase(--it) //so preciso da posi��o que quero remover o elemento;	
	*/
	
	//metodo .clear(); //remove todos os elementos da lista;
	//metodo .empty(); //tamb�m existe em lista;
	//primeiraLista.merge(segundalista); //mescla duas listas;
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	tam = aula.size(); //fala o tamanho da lista;
	for (int i=0; i<tam; i++){
		cout << aula.front() << "\n"; //imprime o elemento que esta na frente;
		aula.pop_front(); // retira o elemento que esta na frente;
	}
	return 0;
}
