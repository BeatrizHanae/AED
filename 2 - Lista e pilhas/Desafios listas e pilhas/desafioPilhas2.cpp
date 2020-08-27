//Beatriz Hanae Fujimoto -160113814

#include <iostream>
#include <list>
#include <stack>
#include <time.h>
#define QTD 9

using namespace std;

int main(){
	int vetor[QTD];
	int a, b, contador;
	stack <int> pilha, p0, p1, p2, p3;
	list <int> listaAux;
	bool M;
	b=0;
	contador = 1;
	
	srand(time(NULL));
	
	p0.push(1);
	p0.push(0);
	p0.push(0);
	
	for (int i=0; i<QTD; i++){
		M = true;
		while(M){
			b = rand()%10 + 1;
			if (vetor[QTD] == 0){
				vetor[QTD]++;
				
				M = false;
			}
		}
		pilha.push(b);
	}
	
	while(! pilha.empty() ){				
		listaAux.push_back(pilha.top());
		pilha.pop();
	}
	
	while (!listaAux.empty()){
		if (contador <= 3) {
			p1.push(listaAux.front());
		}
		if(contador > 3 && contador <= 6){
			p2.push(listaAux.front());
		}
		if(contador > 6 && contador <=9){
			p3.push(listaAux.front());
		}
		listaAux.pop_front();
		contador++;
		
	}
	
	
	for(int i=0;i<3;i++){
		cout << p0.top() << "--" << p1.top() << "--" << p2.top() << "--" << p3.top() << endl;
		p0.pop();
		p1.pop();
		p2.pop();
		p3.pop();
	}
	
	return 0;
}
