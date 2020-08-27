//Adrielle -180096699
//DESAFIO 2 -ORDENACAO 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class controle{
	public:
	//A SEGUIR, INFORMAÇÕES PRÉ-DEFINIDAS PELOS ALUNOS
	
	//FISICA
	 string f_nome[8] = {"Miguel" , "Sophia", "Davi", "Alice", "Arthur", "Julia" ,"Pedro", "Isabella"};
	 
	 double f_notas[8] = {5.5,6.6,8.0,3.0,4.0,10.0,7.2,2.4};
	 
	 string b_nome[8]= {"Lorenzo", "Lara", "Gustavo", "Mariana", "Felipe", "Nicole", "Samuel", "Rafaela" };
	 double b_notas[8] = {9.2,4.2,6.2,7.8,9.4,8.1,3.2,1.8};
	 
	 string q_nome[8]= {"Gabriel", "Manuela", "Bernardo", "Laura", "Lucas", "Luiza", "Matheus", "Valentina"};
	 double q_notas[8] = {5.2,4.7,7.3,8.2,2.7,3.8,9.4,8.2};

	
	
	
	
	
	void alfabetico_f(){
		int verdade, troca, continua;		//variaveis do algoritmo bouble sort
		verdade=1;	
		troca= 0;
		continua=1;
		double aux;	
			
		string aux2;
			
		cout << "FISICA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (f_nome[i] > f_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = f_notas[i+1];
					f_notas[i+1] = f_notas[i];
					f_notas[i] = aux;
					troca = 1;
					//como o nome deve acompanhar, farei a mesma coisa com o nome
					aux2 = f_nome[i+1];
					f_nome[i+1] = f_nome[i];
					f_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << f_nome[a] << " - " << f_notas[a] << endl;
		}
		cout << endl;
				
		continua=1;
		cout << "QUIMICA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (q_nome[i] > q_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				//como a nota deve acompanhar, farei a mesma coisa com ela

					aux = q_notas[i+1];
					q_notas[i+1] = q_notas[i];
					q_notas[i] = aux;
					troca = 1;
					aux2 = q_nome[i+1];
					q_nome[i+1] = q_nome[i];
					q_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << q_nome[a] << " - " << q_notas[a] << endl;
		}
		cout << endl;	
			

	
	
	continua=1;
	cout << "BIOLOGIA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (b_nome[i] > b_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = b_notas[i+1];
					b_notas[i+1] = b_notas[i];
					b_notas[i] = aux;
					troca = 1;
				
					aux2 = b_nome[i+1];
					b_nome[i+1] = b_nome[i];
					b_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << b_nome[a] << " - " << b_notas[a] << endl;
		}
		cout << endl;
	
	
	}
	void fisica(){
		
		int verdade, troca, continua;		//variaveis do algoritmo bouble sort
		verdade=1;	
		troca= 0;
		continua=1;
		double aux;	
			
		string aux2;
			
		cout << "FISICA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (f_nome[i] > f_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = f_notas[i+1];
					f_notas[i+1] = f_notas[i];
					f_notas[i] = aux;
					troca = 1;
					//como o nome deve acompanhar, farei a mesma coisa com o nome
					aux2 = f_nome[i+1];
					f_nome[i+1] = f_nome[i];
					f_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << f_nome[a] << " - " << f_notas[a] << endl;
		}
		cout << endl;
		
		//crescente:	
		
		continua=1;
		cout << "FISICA: "<< endl;
	
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (f_notas[i] > f_notas[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = f_notas[i+1];
					f_notas[i+1] = f_notas[i];
					f_notas[i] = aux;
					troca = 1;
					//como o nome deve acompanhar, farei a mesma coisa com o nome
					aux2 = f_nome[i+1];
					f_nome[i+1] = f_nome[i];
					f_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << f_nome[a] << " - " << f_notas[a] << endl;
		}
		cout << endl;
	
	
	}
	void biologia(){
		int verdade, troca, continua;		//variaveis do algoritmo bouble sort
		verdade=1;	
		troca= 0;
		continua=1;
		double aux;	
			
		string aux2;
		
		cout << "BIOLOGIA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (b_nome[i] > b_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = b_notas[i+1];
					b_notas[i+1] = b_notas[i];
					b_notas[i] = aux;
					troca = 1;
				
					aux2 = b_nome[i+1];
					b_nome[i+1] = b_nome[i];
					b_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << b_nome[a] << " - " << b_notas[a] << endl;
		}
		cout << endl;
		continua =1;
		cout << "Biologia "<< endl;
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (b_notas[i] > b_notas[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = b_notas[i+1];
					b_notas[i+1] = b_notas[i];
					b_notas[i] = aux;
					troca = 1;
					//como o nome deve acompanhar, farei a mesma coisa com o nome
					aux2 = b_nome[i+1];
					b_nome[i+1] = b_nome[i];
					b_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for ( int a =0 ; a<8 ; a++){
			cout << b_nome[a] << " - " << b_notas[a] << endl;
		}	
	
		
	}
	
	void quimica(){
		int verdade, troca, continua;		//variaveis do algoritmo bouble sort
		verdade=1;	
		troca= 0;
		continua=1;
		double aux;	
			
		string aux2;
		
		cout << "QUIMICA: "<< endl;
		
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (q_nome[i] > q_nome[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
				//como a nota deve acompanhar, farei a mesma coisa com ela

					aux = q_notas[i+1];
					q_notas[i+1] = q_notas[i];
					q_notas[i] = aux;
					troca = 1;
					aux2 = q_nome[i+1];
					q_nome[i+1] = q_nome[i];
					q_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for (int a =0 ; a<8 ; a++){
			cout << q_nome[a] << " - " << q_notas[a] << endl;
		}
		continua=1;
			cout << endl;	
			cout << "QUIMICA: "<< endl;
		while(continua==1){		
				troca=0;
			for(int i=0 ; i<7 ; i++){	
			
				if (q_notas[i] > q_notas[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = q_notas[i+1];
					q_notas[i+1] = q_notas[i];
					q_notas[i] = aux;
					troca = 1;
					//como o nome deve acompanhar, farei a mesma coisa com o nome
					aux2 = q_nome[i+1];
					q_nome[i+1] = q_nome[i];
					q_nome[i] = aux2;
					
					
				}
		
			}
			
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
			
		}
	//dando cout nos numeros ordenados
		for ( int a =0 ; a<8 ; a++){
			cout << q_nome[a] << " - " << q_notas[a] << endl;
		}
		cout << endl;
	}

};

int main(){
	controle notas;
	int aswr;
	char aswr2;
	inicio:
	cout << "O QUE DESEJA? " << endl;
	cout << "1. FISICA" << endl;
	cout << "2. QUIMICA" << endl;
	cout << "3. BIOLOGIA" << endl;
	cin >> aswr;
	
	switch(aswr){
		case 1:
			notas.fisica();
			break;
		case 2:
			notas.quimica();
			break;
		case 3:
			notas.biologia();	
				
	}
	cout << "DESEJA VOLTAR AO MENU ? (s/n)" << endl;
	cin >> aswr2;
	
	if(aswr2=='s'){
		system("cls");
		goto inicio;
	}
	//se deseja retornar ao menu
	
	return 0;
	
}
