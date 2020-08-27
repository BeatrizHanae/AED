#include <iostream>
#include <vector>

using namespace std;


class Aluno {
	public:
		
		string usuario;
		int matricula, mat1;

void inserir(vector<int> &m){
	int mat2;
	
	for (int i = 0; i<11; i++){
		if ( i= 0 || i = 1){
			mat2 = m[i];
		} else {
			mat1 = m[i];
		}
	}
	cout << mat1;
}
		

};


int main (){
	int opc;
	vector <int> matr;
	string nome;
	Aluno alunos;
	
	while(true){
		cout << "1- Cadastrar um novo usuario." << endl
			 << "2- Verificar o saldo disponivel." << endl
			 << "3- Fazer recarga." << endl
			 << "4- Deletar usuario." << endl;
 		cin >> opc;
 		
		switch (opc){
			case 1:{
				cout << "Digite o nome: " << endl;
				cin >> nome;
				cout << "/n Digite a matricula: " << endl;
				cin >> matr;
				
				alunos.inserir(matr);
				
				break;
			}
			case 2:{
				
				break;
			}
		}
		
		
	}
}
