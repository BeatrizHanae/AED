#include <iostream>
#include <fstream>
#include <stack> //biblioteca de pilha
#define QTD 5

using namespace std;


int main(){
	stack <int> dinheiro;
	int opc, dinheiroAux, i;
	fstream arquivo;
	
	while(true){
		cout << "O que deseja fazer com o cofrinho hoje?" << endl;
		cout << "1 - Guardar dinheiro.\n" 
			 << "2 - Quantidade de cada cédula.\n" 
			 << "3 - Soma total.\n" 
			 << "4 - Retirar dinheiro.\n" 
			 << "5 - Sair.\n" << endl;
			 cin >> opc;
			 
			 switch(opc){
			 	case 1: {
			 		arquivo.open("Cofre.txt", ios::app);
			 		for (i=0; i<QTD; i++){
			 			cout << "Qual o valor da nota que deseja guardar?" << endl;
			 			cin >> dinheiroAux;
			 			if (dinheiroAux == 5 || dinheiroAux == 10 || dinheiroAux == 50){
			 				arquivo << dinheiroAux << "\n";	
						} else {
							while (dinheiroAux != 5 || dinheiroAux != 10 || dinheiroAux != 50){
							cout << "Valor nao permitido, insira outro valor." << endl;
							cin >> dinheiroAux;	
							}
							arquivo << dinheiroAux << "\n";	
						} 
						dinheiro.push(dinheiroAux);
					 }
					 arquivo.close();
					break;
				 }
				 case 2:{
				 	
					break;
				 }
				 case 3: {
				 	
					break;
				 }
				 case 4: {
				 	
					break;
				 }
				 case 5: {
				 	exit(5);
					break;
				 }
			 }
	}













	return 0;	
}
