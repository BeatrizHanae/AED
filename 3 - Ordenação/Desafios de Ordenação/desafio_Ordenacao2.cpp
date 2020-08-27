/*Dado que estamos em um consultorio de um nutricionista, precisamos fazer o
cadastro de todos os pacientes que desejam ser atendidos. O paciente, ao chegar, deve informar o nome, a idade, seu peso e sua altura. O programa que organiza a ordem dos pacientes, deve primeiro mostrar na
ordem de cadastro todos os nomes na tela.*/

#include <iostream>
#include <vector>
#include <math.h>
#define QTD 2

using namespace std;

class Pacientes{
	string nome;
	int idade;
	float peso, altura, IMC;
	
	public:
	void setNome(string n){
		nome = n;
	}
	string getNome(){
		return nome;
	}
	void setIdade(int i){
		idade = i;
	}
	int getIdade(){
		return idade;
	}
	void setPeso(float p){
		peso = p;
	}
	float getPeso(){
		return peso;
	}
	void setAltura(float a){
		altura = a;
	}
	float getAltura(){
		return altura;
	}
	void setIMC(float im){
		IMC = im;
	}
	
	float getIMC(){
		return IMC;
	}
		
	float calculoIMC(float peso, float altura){

		IMC= peso/(pow(altura,2));
		
		return IMC;
	}
	void imprimePaciente(){
		cout << "Dados do paciente " << ": " << nome << ", " << idade << ", " << peso << ", " << altura << ", "<< IMC << endl;
	}

};


int main (){
	
	int opc, i, id;
	float peso1, altura1;
	string nome1; 
	vector<Pacientes> paciente;
	Pacientes pacienteAux;
	
	
	while (true){
		cout << "1 - Cadastrar os pacientes.\n"
			 << "2 - Ordenar a lista de pacientes para começar o atendimento\n"
			 << "3 - Mostrar os resultados da pesquisa.\n"
			 << "4 - Sair.\n"  << endl;
			 cin >> opc;
			 
			 switch(opc){
			 	case 1:{
			 		for (i=0; i<QTD;i++){
			 			if (i<QTD){
			 				cout << "Digite o nome do paciente: " << endl;
			 				cin >> nome1;
			 				cout << "Digite a idade do paciente: " << endl;
							cin >> id;
							cout << "Digite o peso do paciente: " << endl;
							cin >> peso1;
							cout << "Digite a altura do paciente: " << endl;
							cin >> altura1;
							
							pacienteAux.setNome(nome1);
							pacienteAux.setIdade(id);
							pacienteAux.setPeso(peso1);
							pacienteAux.setAltura(altura1);
							
							paciente.push_back(pacienteAux);
								
						 } else {
						 	cout << "Nao temos mais horarios para hoje!" << endl;
						 }
					 }
					break;
				 }
				 case 2:{ //Ordenar a lista de paciente pelas preferências
				 	paciente[i].calculoIMC(peso1, altura1);
				 for (i=0; i<QTD;i++){
						paciente[i].imprimePaciente();
					}
				 	
					break;
				 }
				 case 3: {
				 	
					break;
				 }
			 }
	}

	return 0;
}
