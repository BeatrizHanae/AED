//questao 4
// poderia ter sido feito de uma forma beeem mais facil usando vetor? poderia!!! mas fui pensart tarde demais :(
//!!! semm tempo para mtss comentarios
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class mae{
	public:
	string nome[100];
	float preco[100];
	int calorias[100];
	
	
};
class comprar : public mae{
	public:
		
	fstream lanches;
	
	int aux1=0,aux2=0;
	char aux3;
	int aux4=0;
	
	void compras(){	//

	lanches.open("lanches.txt",  ios::out | ios::app );
	
	cout << "LANCHES DISPONIVEIS SAO: (selecione)\n";
	cout << "1.PIZZA \n2.hamburguer \n";
	cin >> aux1;
	
	if(aux1==1){
		cout << "Selecione! Pizzas disponiveis sao: "<< endl;
		cout << "1- MARGUERITA, RS25.00, 50CAL\n 2- VEGETARIANA RS15.00, 87cal \n 3- 4 QUEIJOS RS30.00, 100CAL  "<< endl;
		cin >> aux2;
		switch(aux2){
			case 1:
				cout<< "PIZZA SELECIONADA: Marguerita. DESEJA BORDA? (s/n)" << endl;
				cin >> aux3;
				cout << "TAMANHO? 1.Grande, 2. Media, 3. Grande" << endl;
				cin>> aux4;
				cout << "PEDIDO FEITO COM SUCESSO !";
				cout << "MARGUERITA, RS25.00, 50CAL ";
				if(aux3=='s')
					cout << ",com borda ";
				if(aux3=='n'){
					
					cout << "sem borda ";
				}	
				if(aux4==1)
					cout << ", tamanho grande" << endl;
				if(aux4==2)
					cout << ", tamanho medio" << endl;
				if(aux4==3)
					cout << ", tamanho pequeno" << endl;
					break;
				case 2:
					cout<< "PIZZA SELECIONADA: vegetariana. DESEJA BORDA? (s/n)" << endl;
					cin >> aux3;
					cout << "TAMANHO? 1.Grande, 2. Media, 3. Grande" << endl;
					cin>> aux4;
					cout << "PEDIDO FEITO COM SUCESSO !";
					cout << " VEGETARIANA RS15.00, 87cal ";
					if(aux3=='s')
						cout << ",com borda ";
					if(aux3=='n'){
						
						cout << "sem borda ";
					}	
					if(aux4==1)
						cout << ", tamanho grande" << endl;
					if(aux4==2)
						cout << ", tamanho medio" << endl;
					if(aux4==3)
						cout << ", tamanho pequeno" << endl;
					break;
				case 3:
				cout<< "PIZZA SELECIONADA: 4 queijos. DESEJA BORDA? (s/n)" << endl;
					cin >> aux3;
					cout << "TAMANHO? 1.Grande, 2. Media, 3. Grande" << endl;
					cin>> aux4;
					cout << "PEDIDO FEITO COM SUCESSO !";
					cout << " VEGETARIANA RS15.00, 87cal ";
					if(aux3=='s')
						cout << ",com borda ";
					if(aux3=='n'){
						
						cout << "sem borda ";
					}	
					if(aux4==1)
						cout << ", tamanho grande" << endl;
					if(aux4==2)
						cout << ", tamanho medio" << endl;
					if(aux4==3)
						cout << ", tamanho pequeno" << endl;
						break;	
					
			
		}
	
		
	}
	if(aux1==2){
		cout << "Selecione! Hamburgueres disponiveis sao: "<< endl;
		cout << "HAMBURGUER \n sabor: 1- Hamburguer de grao de bico, RS15.00, 35cal \n 2-Hamburguer de lentilha, RS18.00, 30cal \n 3- Hamburguer de Soja RS15.00, 30cal \n" << endl;
		cin >> aux2;
		
		switch(aux2){
			case 1:
					cout<< "Deseja tomate?(s/n)" << endl;
					cin >> aux3;
					cout << "dESEJA ALFACE? 1.SIM 2.NAO" << endl;
					cin>> aux4;
					cout << "PEDIDO FEITO COM SUCESSO !";
					cout << " Hamburguer de grao de bico, RS15.00, 35cal ";
					if(aux3=='s')
						cout << ",com TOMATE ";
					if(aux3=='n'){
						
						cout << "sem TOMATE ";
					}	
					if(aux4==1)
						cout << ", Com alface" << endl;
					if(aux4==2)
						cout << ", sem alface" << endl;
				break;
			case 2:
					cout<< "Deseja tomate?(s/n)" << endl;
					cin >> aux3;
					cout << "DESEJA ALFACE? 1.SIM 2.NAO" << endl;
					cin>> aux4;
					cout << "PEDIDO FEITO COM SUCESSO !";
					cout << " Hamburguer de lentilha, RS18.00, 30cal ";
					if(aux3=='s')
						cout << ",com TOMATE ";
					if(aux3=='n'){
						
						cout << "sem TOMATE ";
					}	
					if(aux4==1)
						cout << ", Com alface" << endl;
					if(aux4==2)
						cout << ", sem alface" << endl;
					break;	
				case 3:
					cout<< "Deseja tomate?(s/n)" << endl;
					cin >> aux3;
					cout << "dESEJA ALFACE? 1.SIM 2.NAO" << endl;
					cin>> aux4;
					cout << "PEDIDO FEITO COM SUCESSO !";
					cout << " Hamburguer de Soja RS15.00, 30cal";
					if(aux3=='s')
						cout << ",com TOMATE ";
					if(aux3=='n'){
						
						cout << "sem TOMATE ";
					}	
					if(aux4==1)
						cout << ", Com alface" << endl;
					if(aux4==2)
						cout << ", sem alface" << endl;
						break;
			
		}
		
		
		
		
	}
	
	
	lanches.close();
	
	}
};

class cardapio : public mae{
	public:
	fstream cardapio;
	
	void card(){
	cardapio.open("cardapio.txt",  ios::out | ios::app );
	cout << "CARDAPIO" << endl;
	cardapio << "CARDAPIO:" << endl;
	cout << "PIZZA" << endl;
	cardapio << "PIZZA\n";
	cout << "1. MARGUERITA, RS25.00, 50CAL\n VEGETARIANA RS15.00, 87cal \n 4 QUEIJOS RS30.00, 100CAL  "<< endl;
	cardapio<< "1. MARGUERITA, RS25.00, 50CAL\n VEGETARIANA RS15.00, 87cal \n 4 QUEIJOS RS30.00, 100CAL\n";
	cout << "HAMBURGUER \n sabor: 1. Hamburguer de grao de bico, RS15.00, 35cal \n Hamburguer de lentilha, RS18.00, 30cal \n 3. Hamburguer de Soja RS15.00, 30cal \n" << endl;
	cardapio<<"ao de bico, RS15.00, 35cal \n Hamburguer de lentilha, RS18.00, 30cal \n 3. Hamburguer de Soja RS15.00, 30cal\n";
	
	cardapio.close();
	
}
};

int main(){
	comprar a;		//instanciando
	cardapio b;
	int aux;
	
	while(aux!=5){
	cout << endl;
	cout <<"1. Informacoes" << endl;
	cout << "2. Cardapio" << endl;
	cout <<"3. Lanche mais caro" << endl;
	cout << "4.Lanche mais calorico" << endl;
	cout << "5. Sair" << endl;
	cin >> aux;
	system("cls");
	switch(aux){
		case 1:
			cout << endl;
			a.compras();		//nao sei porque ele nao ta chamando esse metodo!!
			cout << endl;
			break;
		case 2:
			cout<< endl;
			b.card();
			cout << endl;
			break; 
		case 3:
			cout << "LANCHE MAIS CARO: \n PIZZA 4 QUEIJOS RS30.00, 100CAL";
			break;
		case 4:
			cout << "LANCHE MAIS CALORICO : \nPIZZA 4 QUEIJOS RS30.00, 100CAL ";
			break;		
		
		
		
	}
	
}
	return 0;
}
