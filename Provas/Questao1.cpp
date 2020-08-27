// Questao 1
//Adrielle - 180096699
#include<iostream>
#include<list>
using namespace std;
int main(){
						//,1,1,2,3,5,8,
	int aswr, n;
	int ant=0;
	while(aswr!=4){
	
	cout << "OPCOES " << endl;
	cout << "1. Inserir quantidade de posicoes " << endl;
	cout << "2. Mostrar lista de fibonnaci " << endl;
	cout << "3. Realizar busca binaria" << endl;
	cout << "4. sair" << endl;
	
	cin >> aswr;
	switch(aswr){
		case 1:
			cout << "Digite numero de posicoes" << endl;
			cin >> n;
			//break;
		case 2:
				for(int i=0 ; i < n ; i++){
					 if(i==0){
					 	cout << i << " ";
					 	ant = 0;
					 }
					 if(i==1){
					 	cout << i << " ";
					 	ant=-1;
					 }
					 else{
					 	cout << i + ant  << " ";
					 	ant = i; 
					}
				}
			break;	
		case 3:
			
			break;
				
	}
}
	return 0;
}
