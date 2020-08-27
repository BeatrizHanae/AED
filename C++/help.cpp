#include <iostream>
#include <stdio.h>

using namespace std;

class Alunos {
	public:
		string nome, curso;
		int matricula;
		
	/*Alunos(){
		nome = "N/A";
		matricula = 0;
		curso = "N/A";
	}*/
	
	void setNome(string n){
		nome = n;
	}
	void setMatricula(int m){
		matricula = m;
	}
	void setCurso (string c){
		curso = c;
	}
	void imprime_alunos(){
		cout << "Aluno: " << nome 
			 << "Matricula: " << matricula 
			 << "Curso: " << curso 
			 << endl;
	}
};

int main (){
	
	int mat, numero;
	string nome, cur;
	Alunos alunos[numero];
	
	cout << "Insira a quantidade de alunos na turma: " << endl;
	cin >> numero;

		while(true){
			int opcao;
				cout << "1- Inserir alunos." << endl;
				cout << "2- Imprimir a lista de alunos." << endl;
				cout << "3- Sair." << endl;
			cin >> opcao;
			switch(opcao){
				case 1: {
					int i;
					for (i=0; i < numero; i++){
						alunos[i].imprime_alunos();
					}
					break;
				}
				case 2:{
					int i;
					for (i=0; i < numero; i++){
						cout << "Digite o nome do aluno: " << endl ;
						cin >> nome;
		
						cout << "Digite a matricula do aluno: " << endl;
						cin >> mat;
						
						cout << "Digite o curso do aluno: " << endl;
						cin >> cur;
						
						alunos[i].setNome(nome);
						alunos[i].setMatricula(mat);
						alunos[i].setCurso(cur);
					}
					break;
				}
				case 3:{
					exit(3);
					break;
				}
					
			}
		}
	
	return 0;
}
