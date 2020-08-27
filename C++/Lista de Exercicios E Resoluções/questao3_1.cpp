	#include <iostream>
	#include <bits/stdc++.h>
	
	
	using namespace std;
	
	class Alunos {
		
			string nome, curso;
			int matricula, falta;
			float notas;
			
		public:
		
		void imprime(){
			cout << "Aluno: " << nome << endl;
			cout << "Matricula: " << matricula << endl; 
			cout << "Curso: " << curso << endl;
			cout << "Nota: " << notas
				 << "\nFaltas: " << falta << endl;
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
		
		void setNota (float nota_final){
			notas = nota_final;
		}
		
		void setFaltas(int faltas_totais){
			falta = faltas_totais;
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
		
		int mat,i ,numerodealunos, fal;
		float nota;
		string nome, cur;
		vector<Alunos> alunos;
		Alunos alunoAuxiliar;
	
		cout << "Quantos alunos deseja registrar?" << endl;
		cin >> numerodealunos;
		
				for (i=0; i < numerodealunos ; i++){
				cout << "Digite o nome do aluno: " << endl;
				cin >> nome;
			
				cout << "Digite a matricula do aluno: " << endl;
				cin >> mat;
							
				cout << "Digite o curso do aluno: " << endl;
				cin >> cur;
				
				cout << "Digite a nota final do aluno: " << endl;
				cin >> nota;
				
				cout << "Digite a quantidade de faltas: " <<endl;
				cin >> fal;
				
				alunoAuxiliar.setNome(nome);	
				
				alunoAuxiliar.setMatricula(mat);
				
				alunoAuxiliar.setCurso(cur);
				
				alunoAuxiliar.setFaltas(fal);
				
				alunoAuxiliar.setNota(nota);
				
				alunos.push_back(alunoAuxiliar);
				
			}
			
		for (i=0; i < numerodealunos; i++){
				alunos[i].imprime();
			}
		
		return 0;
	}
