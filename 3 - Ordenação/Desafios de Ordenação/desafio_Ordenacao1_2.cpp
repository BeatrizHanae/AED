//Desafio 2 de Ordenação
//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include <vector>
#define QTD 8

using namespace std;

void trocarNome(vector<string> &vetor1, vector<float> &vetor2, int i, int j ){
	string aux;
	float aux2;
	
	aux = vetor1[j];
	vetor1[j] = vetor1[i];
	vetor1[i] = aux;
	
	aux2 = vetor2[i+1];
	vetor2[i+1] = vetor2[i];    //fazendo com o que a nota siga o nome ordenado 
	vetor2[i] = aux2;
	
}

void trocarNota(vector<float> &vetor1, vector<string> &vetor2, int i, int j){
	string aux2;
	float aux;
	
	aux = vetor1[j];
	vetor1[j] = vetor1[i];
	vetor1[i] = aux;
	
	aux2 = vetor2[i+1];
	vetor2[i+1] = vetor2[i];    //fazendo com o que a nota siga o nome ordenado 
	vetor2[i] = aux2;
	
}
void ordenarNome(vector<string> &vetor1, vector<float> &vetor2){
	for(int i=0; i<QTD-1; i++){
		for (int j=0; j<QTD-i-1; j++){
			if (vetor1[j] > vetor1[j+1]){
				trocarNome(vetor1, vetor2, j ,j+1);
			}
		}
	}
}

void ordenarNota(vector<float> &vetor1, vector<string> &vetor2){
	for(int i=0; i<QTD-1; i++){
		for (int j=0; j<QTD-i-1; j++){
			if (vetor1[j] > vetor1[j+1]){
				trocarNota(vetor1, vetor2, j ,j+1);
			}
		}
	}
}

void imprimeTurma(vector<string> &vetor1, vector<float> vetor2){
	string nome;
		for (int i=0; i<QTD; i++){
			cout << "Nome: " << vetor1[i] << " - nota: " << vetor2[i] << endl;
		}
}

int main (){
	vector <string> alunosF, alunosQ, alunosB;
	vector <float> notasF, notasQ, notasB;
	int i, opc;

	while (true){
		cout << "\n1 - Ordenar os alunos na materia de fisica." << endl;
		cout << "2 - Ordenar os alunos na materia de quimica." << endl;
		cout << "3 - Ordenar os alunos na materia de biologia." << endl;
		cout << "4 - Sair" << endl;
		cin >> opc;		

			switch (opc){
				case 1: {
					alunosF = {"Miguel", "Sophia", "Davi" ,"Alice", "Arthur", "Julia", "Pedro", "Isabela"};
					notasF = {5.5,6.6,8,3,4,10,7.2,2.4};
					system("cls");
					ordenarNome(alunosF, notasF);
					cout << "\nOrdenado por Nome:" << endl;
					imprimeTurma(alunosF, notasF);

					ordenarNota(notasF, alunosF);
					cout << "\nOrdenado por Nota:" << endl;
					imprimeTurma(alunosF, notasF);
					break;
				}
				case 2:{
					alunosQ = {"Gabriel", "Manuela", "Bernardo", "Laura", "Lucas", "Luiza", "Matheus", "Valentina"};
					notasQ = {5.2, 4.7,7.3,8.2,2.7,3.8,9.4,8.2};
					system("cls");					
					ordenarNome(alunosQ, notasQ);
					cout << "\nOrdenado por Nome:" << endl;
					imprimeTurma(alunosQ, notasQ);

					ordenarNota(notasQ, alunosQ);
					cout << "\nOrdenado por Nota:" << endl;
					imprimeTurma(alunosQ, notasQ);
					break;
				}
				case 3:{					
					alunosB = {"Lorenzo", "Lara", "Gustavo", "Mariana", "Felipe", "Nicole", "Samuel", "Rafaela"};
					notasB = {9.2, 4.2,6.2,7.8,9.4,8.1,3.2,1.8};
					system("cls");
					ordenarNome(alunosB, notasB);
					cout << "\nOrdenado por Nome:" << endl;
					imprimeTurma(alunosB, notasB);

					ordenarNota(notasB, alunosB);
					cout << "\nOrdenado por Nota:" << endl;
					imprimeTurma(alunosB, notasB);
					break;
				}
				case 4:{
					exit(3);
					break;
				}
			}

	}
	return 0;
}
