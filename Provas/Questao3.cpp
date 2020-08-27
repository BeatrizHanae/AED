//questao3
#include<iostream>
#include<fstream>
#include<string.h>
#include<queue>
//sem tempo pra colocar os trens de verificacao
//!!! semm tempo para mtss comentarios
using namespace std;

//comprar
//numero de cadeiras vendidas e receita
//filaaa de entrada com prioridade && setor mais cheio


class estadio{
	public:
		
	int lugar1[10][40]= { };		//setor1
	int lugar2[10][40] = { };
	
	int vendas=0;   //contador pra contar quant de vendas		
	int p1=0,p2=0;		// coordenadas do vetor
	float receita1;		//receita do setor 1;
	float receita2;		//receita do setor2 
	float receitatotal; 	//receita total
	
	int ingressos1=0;		//contador de ingressos do setor 1
	int ingressos2=0;		//contador de ingressos do setor 2
	
	int s1=0, s2=0;		//contador de ingressos da posicao mais pero e mais longe do campo
	
	int aux3;
	//queue<int> fila;
	
	void comprar(){				//void comprar
		int aux1=0, aux3=0;
		cout << endl;
		
		cout << "EM QUAL SETOR VOCÊ DESEJA COMPRAR UM ASSENTO? " << endl;
		cout << "1. Setor 1 "<< endl;
		cout << "2. Setor 2" << endl;
		cin >> aux3;
		
		
			cout << "QUAL POSICAO VC DESEJA COMPRAR?" << endl;
			cout << "1. RS400.00 - Proximo ao gramado" << endl;
			cout << "2. RS200.00 -outra localidade "<< endl;
			cin >> aux1;
			
			if(aux1==1){
				
				cout << "Digite a posicao que esteja entre [0][0] e [2][40] " << endl;
				cin >> p1 >> p2;
				
				if(aux3==1){		//Vai armazenar no setor 1
					lugar1[p1][p2] = 1;

					cout<< "Conta efetuada com sucesso!" << endl;
					
					receita1+= 400;
					vendas++;
					ingressos1++;
					s1++;
				}
				if(aux3==2){		//vai armazenar no setor 2
					lugar2[p1][p2] = 1;

					cout<< "Conta efetuada com sucesso!" << endl;
					
					receita2+= 200;
					vendas++;
					ingressos1++;
					s2++;
				}
				
				
					
			}
	
			if(aux1==2){		
				
				cout << "Digite a posicao que esteja entre [2][0] e [10][40] " << endl;
				cin >> p1 >> p2;	
			
				if(aux3==1){
					lugar1[p1][p2] = 1;
				
					cout<< "Conta efetuada com sucesso!" << endl;
					
					receita1+=200;
					vendas++;
			
					ingressos2++;
					s1++;
				}
				if(aux3==2){
					lugar2[p1][p2] = 1;
			
					cout<< "Conta efetuada com sucesso!" << endl;
					
					receita2+=200;
					vendas++;
					
					ingressos2++;
					s2++;
					
					  
				}	
		}

			

}
	
	void status(){		//void que vai mostrar o statur
		fstream compras;
		compras.open("comprar.txt" , ios::out | ios::app );
		
		cout << " VENDAS JA FEITAS: " << vendas << endl;
		compras<<  "VENDAS JA FEITAS: " << vendas << "\n";
		cout << "RECEITA: " << receita1+receita2 << endl;
		compras<< "RECEITA: " << receita1+receita2 << "\n";
		cout << "SITUACAO DA ARQUIBANCADA" << endl;
		
		cout << "SETOR UM "<< endl;
		compras << "SETOR UM "<< endl;
									//mostrando a arquibandcada do setor um
		for(int f=0 ; f<10 ;f++){
			for(int g=0 ; g<40 ; g++){
			cout << lugar1[f][g] <<" ";		
			compras << 	lugar1[f][g] <<" ";
			}
			cout << endl;
			compras << "\n";
		}
		cout << endl;
		cout << "SETOR DOIS" << endl;
		compras << "SETOR DOIS" << endl;	//mostrando a arquibancada do setor 2
		for(int a=0 ; a<10 ;a++){
			for(int b=0 ; b<40 ; b++){
			cout << lugar2[a][b] <<" ";		
			compras << 	lugar2[a][b] <<" ";
			}
			cout << endl;
			compras << "\n";
		}
		
		
		cout << "\nSETOR MAIS CHEIO: " ;
		compras << "\nSETOR MAIS CHEIO: " ;
		if(s1>s2){
			cout << "SETOR UM" << endl;
			compras << "SETOR UM "<< endl;
		}
		else{
			cout << "SETOR DOIS" << endl;
			compras << "SETOR DOIS "<< endl;	
		}	
	compras.close();
	
	}
	
	void fila(){		//void pra filaa
		cout << "FILA" << endl;
		cout << "INGRESSOS COM PRIORIDADE:"<< endl;
		int y;
		for( y=0 ; y < ingressos1 ; y++){
			
			cout << y+1 << ". Ingresso na vaga + proxima ao campo  "<< endl;
			}
		
		for(int j=0 ; j< ingressos2 ; j++){
			
				cout << y+1 << ". ingresso nas demais posicoes " << endl;
			y++;
		}

}

};
int main(){
	estadio mane;  //instanciando
	int aswr;
	while(aswr!=4){
	
	cout << "menu" << endl;
	cout << "1.COMPRAR "<< endl;
	cout << "2. STATUS" << endl;
	cout << "3. Fila" << endl;
	cin >> aswr;
	switch(aswr){		//switch pra chamar metodos
		case 1:
			mane.comprar();
			break;
		case 2:
			mane.status();
			break;
		case 3:
			mane.fila();
			break;		
		
		
	}
}
	return 0;
}
