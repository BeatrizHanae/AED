#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stack>
#include <list>
using namespace std;

int main (){
setlocale(LC_ALL,"Portuguese");
	int v[9];
	int base, b= 0;
	int cont = 1;
	
	stack <int> pilha;
	stack <int> p0;
	stack <int> p1;
	stack <int> p2;
	stack <int> p3;
	bool repete , achou = false;
	
	list <int> fila_auxiliar;
	srand (time(NULL));
	
	p0.push(1);
	p0.push(0);
	p0.push(0);

	for(int i=0; i<9; i++){
		v[i] = 0;
	}
	
	for(int i=0; i<9; i++){
		repete = true;
		while(repete){
			b = rand()%10 + 1; 
			//b++;
			if(v[b] == 0){
				v[b]++; 				//vai para a proxima posição;
				//cout<<b<<" ";
				repete = false;
			} 
		}
		pilha.push(b);
	}

	while(! pilha.empty() ){					//transfere os elementos da pilha para a fila;
		fila_auxiliar.push_back(pilha.top());
		pilha.pop();
	}
	//fila_auxiliar.sort(); 						//ordena os valores;
	//vpg.vinicios@gmail.com
	
	while(! fila_auxiliar.empty()){
		if( cont <=3){
			p1.push( fila_auxiliar.front() );
			
		}
		if( cont > 3 && cont <= 6 ){
			p2.push( fila_auxiliar.front() );
			
		}
		if( cont > 6 && cont <= 9){
			p3.push( fila_auxiliar.front() );
		
		}
		fila_auxiliar.pop_front();
		cont++;
	}
	
	for(int n=0; n<3; n++){
		cout<<p0.top()<<" | "<<p1.top()<<" | "<<p2.top()<<" | "<<p3.top()<<endl;
		p0.pop();
		p1.pop();
		p2.pop();
		p3.pop();
	}
	
	return 0;
}
