//Beatriz Hanae Fujimoto - 160113814
#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

struct banco{
	string nome;
	int senha;
};

typedef struct banco Banco;

int chave(int senha1){ 
	int n=0;
	char x[100];

	
	itoa(senha1,x,16);
	
		cout << "N° HEXADECIMAL: " << x << endl;	
		
		for(int i=0; i<100; i++){
			if(x[i]>1 && x[i]<9){ 
				n = x[i];  
				i=100; 
			}
		}
		
		cout << "A CHAVE É: " << n << endl;
	return n;
}

void hex(int senha2){
	char x[100];
	
	itoa(senha2, x,16);
		cout << x << endl;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int aux;
	
	string nome1;
	int senha3;
	
	int indice;
	
	
	Banco *tabBanco= new Banco[10];
	
	cout << "MENU" << endl;
	cout << "1- Inserir cliente" << endl;
	cout << "2- Sair" << endl;
	cout << "Digite a opção desejada:" << endl;
		cin >> aux;
	cout << endl << endl;
		
	switch(aux){
		case 1:
			cout << "Inserir dados:" << endl << endl;
			cout << "Nome: ";
				cin.ignore();
				getline(cin,nome1);
			cout << endl;
			cout << "Senha: ";
				cin >> senha3;
			
			indice = chave(senha3);
			
			
			tabBanco[indice].nome= nome1;
			tabBanco[indice].senha = senha3;
			
			cout << endl << endl;
			
			 
			cout << "Senha original: " << tabBanco[indice].senha << endl;
			cout << "Senha criptografada: ";
			hex(senha3);
			cout << "Posição que será armazenada: " << indice << endl;
			
			break;
		case 2:
			exit(2);
			break;
	}
		
	return 0;
}
