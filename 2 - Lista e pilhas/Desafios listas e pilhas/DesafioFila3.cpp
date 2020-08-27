#include <iostream>
#include <queue>

using namespace std;

class Paciente{
public:
	
	queue<string,string> pacientes;
	
	void adiciona_fila(int n){
		string nome, setor;
		Paciente paciAux;
		
		for (int i=0;i<n; i++){
			cout << "Digite o nome do paciente: " << endl;
			cin >> nome;
			cout << " Digite o setor:" << endl;
			cin >> setor;
		
			pacientes.push( nome, setor);
 		}
	}	

};

int main(){
	int opc, N;
	
	while(menu != 4){
		cout << "1- Cadastrar paciente." <<endl;
		cout << "2- Chamar paciente." <<endl;
		cout << "3- Listar fila." <<endl;
		cout << "4- Sair" <<endl;
		cin >> opc;
		
		switch (opc){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				
				break;
			}
		}
	}
}
