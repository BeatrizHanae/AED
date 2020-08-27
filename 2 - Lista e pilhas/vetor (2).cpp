#include <iostream>
#include <bits/stdc++.h>


using namespace std;

class Alunos {
	
		string nome, curso;
		int matricula;
		
	public:
	
	void imprime(){
		cout << "Aluno: " << nome << endl;
		cout << "Matricula: " << matricula << endl; 
		cout << "Curso: " << curso << endl << endl;
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
	
	string getNome(){
		return nome;
	}
	
	int getMatricula(){
		return matricula;
	}
	
	string getCurso(){
		return curso;
	}
	
};

int main (){
	
	int mat,i ,numerodealunos;
	string nome, cur;
	vector<Alunos> alunos;

	cout << "oi" << endl;
	cin >> numerodealunos;
	
			for (i=0; i < numerodealunos; i++){
			
			Alunos alunoAuxiliar;

			cout << "Digite o nome do aluno: " << endl;
			cin >> nome;
		
			cout << "Digite a matricula do aluno: " << endl;
			cin >> mat;
						
			cout << "Digite o curso do aluno: " << endl;
			cin >> cur;
			
	//		cout << "Digite a quantidade de faltas: " <<endl;
	//		cin >> fal;
			
			alunoAuxiliar.setNome(nome);	
			
			alunoAuxiliar.setMatricula(mat);
			
			alunoAuxiliar.setCurso(cur);
			
			alunos.push_back(alunoAuxiliar);

			}

		
	for (i=0; i < numerodealunos; i++){
			alunos[i].imprime();
		}
	
	return 0;
}

