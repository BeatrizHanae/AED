//Adrielle Custodio -180096699
//Desafio 2 - Fila
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
class hospital{
	public:
		int op;
		string paciente_cv[100];
		string paciente_ev[100];
		string paciente_ov[100];
		
		queue<string> paciente_c;
		queue<string> paciente_e;
		queue<string> paciente_o;
		
		string nome_aux;
		int c=0,e=0,o=0;  //meus contadores
		
		void verifica(){
			op=0;
			cout << "EM QUAL AREA DESEJA FAZER A OPERACAO? \n";
			cout << "1. Clinica Geral. \n 2. Exame \n 3. Ortopedia\n";
			cin >> op;	
			}		
		void cadastro(){
			
			cout << "INSIRA OS DADOS ABAIXO: "<<endl;
			cout << "Nome do paciente: ";
		//	cin.ignore();
		//	getline(cin,nome_aux);
			cin >> nome_aux;
			if(op==1){
				paciente_c.push(nome_aux);
				paciente_cv[c]= nome_aux;
				c++;
			}
			else if(op==2){
				paciente_e.push(nome_aux);
				paciente_ev[e]=nome_aux;
				e++;
			}
			else if(op==3){
				paciente_o.push(nome_aux);
				paciente_ov[o]=nome_aux;
				o++;
			}
			
		}
		
		void atender(){
			if(op==1){
				paciente_c.pop();
				paciente_cv[c] = {' '};
				c--;
				
			}
			if(op==2){
				paciente_e.pop();
				paciente_ev[e] = {' '};
				e--;
			}
			if(op==3){
				paciente_o.pop();
				paciente_ov[o] = {' '};
				o--;
			}
			
		}
		void fila(){
			
			for(int a=0 ; a<e ; a++){
				if(op==1){
					cout << paciente_cv[a] << endl;
				}
				if(op==2){
					cout << paciente_ev[a] << endl;
				}
				if(op==3){
					cout << paciente_ov[a] << endl;
					cout << endl;
				}
			}
			
		}
		
		
	
	
};

int main(){
	hospital drikas;
	int aswr=0;
	
	while(aswr!=4){
		
	cout << "MENU " << endl;
	cout <<"1. Cadastrar paciente. \n 2. Atender. \n 3. Mostrar fila\n 4. Sair\n";
	cin>> aswr;	
	system("cls");
	switch(aswr){
		case 1:
			drikas.verifica();
			drikas.cadastro();
			break;
		case 2:
			drikas.verifica();
			drikas.atender();
			break;
		case 3:
			drikas.verifica();
			drikas.fila();
			break;			
	} 
}
	return 0;
}
