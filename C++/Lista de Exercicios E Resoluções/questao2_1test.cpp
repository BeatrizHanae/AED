#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class Alunos {
	
		string nome, curso;
		int matricula;
		
	public:
	void imprime(){
		cout << "Aluno: " << nome << endl;
		cout << "Matricula: " << matricula << endl; 
		cout << "Curso: " << curso << endl;
	}
	
	void setNome(string n){
		nome = n;
	}
	void setMatricula(int m){
		matricula = m;
	}
	void setCurso (string c){
		curso = c;
	}
};

int main (){
	
	int mat,i ,numero;
	string aluno, cur;
	Alunos alunos[30];

		for (i=0; i < 30 ; i++){
			cout << "Digite o nome do aluno: " << endl;
			cin >> aluno;
		
			cout << "Digite a matricula do aluno: " << endl;
			cin >> mat;
						
			cout << "Digite o curso do aluno: " << endl;
			cin >> cur;
						
			alunos[i].setNome(aluno);
			alunos[i].setMatricula(mat);
			alunos[i].setCurso(cur);
		}
		
		for (i=0; i < 30; i++){
			alunos[i].imprime();
		}
	
	return 0;
}
