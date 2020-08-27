//Grafos - lista de adjacencia

#include <iostream>
#include <list>
#include <algorithm> // função find

using namespace std;

class Grafo{
	int V; //numero de vértices
	list <int> *adj; //pontero para um array contem as listas de adjacencias, pq para cada vértice tem uma lista de seus adjacentes;
	
	public:
		Grafo(int V){
			this-> V = V;
			adj = new list<int>[V]; //cria as listas de cada nó
		}
		
		void adicionarAresta(int v1, int v2){ //adiciona uma aresta do grafo
			adj[v1].push_back(v2); //adiciona vértices v2 à lista de vértices adjacentes de v1;
	}
		int obterGrauDeSaida(int v){ /*Obtém o grau de saída de um dado vértice; Grau de saída é o número de arcos que saem de V*/
			return adj[v].size(); //restornar o tamanho daa lista que é a quantidade de vizinhos
	}
	
		bool existeVizinho(int v1, int v2){ //verifica se v2 é vizinho de v1
			if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end()){
				return true;
			} else {
				return false;
			}
		
	}
		
};

int main (){
	//criando um grafo de 4 vpertices
	Grafo grafo(4);
	
	//adicionando as arestas
	grafo.adicionarAresta(0,1); //saindo de zero e chegando em 1
	grafo.adicionarAresta(0,3); //saindo de zero e chegando em 3;
	grafo.adicionarAresta(1,2); //saindo de 1 e chegando em 2;
	grafo.adicionarAresta(3,1);
	grafo.adicionarAresta(3,2);
	
	//mostrando os graus de saida;
	cout << "Grau de saida do vertice 3: " << grafo.obterGrauDeSaida(1);
	cout << "\nGrau de saida do vertice 3: " << grafo.obterGrauDeSaida(3);
	
	//verifica se existe vizinhos
	if(grafo.existeVizinho(2,0)){
			cout << "\nO 1 er vizinho do 0" << endl;
		} else {
			cout << "\n2 NAO er vizinho de 0" << endl;
		}
	
	return 0;
}

