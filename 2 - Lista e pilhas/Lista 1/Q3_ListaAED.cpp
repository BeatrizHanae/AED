#include <iostream>
#include <list>

using namespace std;
//classe é mais fácil;

class Alunos{
	string nome;
	float altura, media;
	int idade;
	
	public:
		//set -> modificadores
		void setNome(string n){
			nome = n;
		}
		
		//get -> acessores
		string getNome (){
			return nome;
		}
		
		void setAltura (float a){
			altura = a;
		}
		
		float getAltura (){
			return altura;
		}
		
		void setIdade(int i){
			idade = i;
		}	
		
		int getIdade(){
			return idade;
		}
		
		void imprimir(){
			cout << "Nome: " << nome
				 << "  Idade: " << idade
				 << "  Altura: " << altura <<endl;
		}
//		
//		float media(float a, int n){
//			float x1, x2;
//			
//			x1 = a + x1;		
//			x2 = x1 / n;
//			
//			return x2;
//		}
		
		void imprimeAcima(){
			cout << "ALunos que possuem altura acima da media:\n";
			cout << "Nome: " << nome
				 << "Altura: " << altura << endl;
			
		}
		
		void imprimeAbaixo(){
			cout << "ALunos que possuem altura abaixo da media:\n";
			cout << "Nome: " << nome
				 << "Altura: " << altura << endl;
		}
};

int main (){
	list <Alunos> alunos;
	list <Alunos> alunosAcima, alunosAbaixo;
	Alunos alunosAuxiliar;
	string nomeAux;
	float alturaAux, mediaAux, media;
	int i, n, idadeAux, opc;
	
	cout << "Digite a quantidade de alunos. \n" << endl;
	cin >> n;
	
	while (true){
		cout << "1 - Registrar alunos." <<endl;
		cout << "2 - Listar alunos." <<endl;
		cout << "3 - Alunos abaixo da media." <<endl;
		cout << "4 - Alunos acima da media." <<endl;
		cout << "5 - Sair." <<endl;
		cin >> opc;
		
			switch(opc){
				case 1: {
					for (int i=0; i < n; i++) {
		
						cout << "Digite o nome do aluno: ";
						cin >> nomeAux;
						
						cout << "Digite a idade do aluno: ";
						cin >> idadeAux;
						
						cout << "Digite a altura do aluno: ";
						cin >> alturaAux;
				
						alunosAuxiliar.setNome(nomeAux);
						alunosAuxiliar.setIdade(idadeAux);
						alunosAuxiliar.setAltura(alturaAux);
						alunos.push_back(alunosAuxiliar);
					}
				break;
				}
				case 2: {
					for (int i=0; i < n; i++){
						alunos[i].imprimir();
					}
					
					break;
				}
				case 3:{
					for (int i=0; i<n; i++){
						mediaAux = mediaAux + alturaAux;
						media = mediaAux/n;
						if (alturaAux > media){
						alunos[i].imprimeAcima();	
						}
					}
					break;
				}
				case 4:{
					
					
					break;
				}
			}
	}
	

	
	return 0;
	
}
