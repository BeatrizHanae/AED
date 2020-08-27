#include <iostream>
using namespace std;

//declaracao da classe
class Funcionario{
	string nome;//atributos privados (nao contem modificador de acesso)
	string cargo;
	public://metodos publicos
		Funcionario(){
			nome = "N/A";
			cargo = "N/A";
		}
		string getNome(){
			return nome;
		}

		string getCargo(){
			return cargo;
		}

		void setNome(string novoNome){
			nome = novoNome;
		}

		void setCargo(string novoCargo){
			cargo = novoCargo;
		}
};


int main(){
	Funcionario f1, f2;

	f1.setCargo("Engenheira");
	f1.setNome("Mariana");

	f2.setCargo("Contador");
	f2.setNome("Jose");

	cout 	<< "Funcionarios sao: " << endl
			<< f1.getNome() << ", " << f1.getCargo() << endl
			<< f2.getNome() << ", " << f2.getCargo() << endl;

	return 0;

}
