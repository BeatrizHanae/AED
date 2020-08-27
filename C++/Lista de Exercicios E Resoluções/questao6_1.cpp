	#include <iostream>
	#include <bits/stdc++.h>
	
	
	using namespace std;
	
	class Pacientes {
		
			string nome, tipoSanguineo;
			int telefone, idade;
			
		public:
		
		void imprime(){
			cout << "Paciente: " << nome << endl;
			cout << "Telefone: " << telefone << endl; 
			cout << "Tipo Sanguineo: " << tipoSanguineo << endl;
			cout << "Idade: " << idade << endl;
		}
	
		void setNome(string n){
			nome = n;
		}
		void setTipoSangue(string s){
			tipoSanguineo = s;
		}
		void setTelefone (int t){
			telefone = t;
		}
		void setIdade (int i){
			idade = i;
		}
		string getTipoSanguineo (){
			return tipoSanguineo;
		}
	};
  
	int main (){
		
		int tel, id ,i ,numerodepacientes;
		string nome, tipoSangue, s2;
		vector<Pacientes> pacientes;
		Pacientes pacientesRegistrados;
		s2 = "AB";
		
		cout << "Quantos pacientes deseja cadastrar?" << endl;
		cin >> numerodepacientes;
		
				for (i=0; i < numerodepacientes ; i++){
				cout << "Digite o nome do paciente: " << endl;
				cin >> nome;
			
				cout << "Digite o telefone do paciente: " << endl;
				cin >> tel;
							
				cout << "Digite o tipo sanguineo do paciente: " << endl;
				cin >> tipoSangue;
				
				cout << "Digite a idade do paciente: " << endl;
				cin >> id;
				
				pacientesRegistrados.setNome(nome);	
				
				pacientesRegistrados.setTelefone(tel);
				
				pacientesRegistrados.setIdade(id);
				
				pacientesRegistrados.setTipoSangue(tipoSangue);
				
				pacientes.push_back(pacientesRegistrados);
				
			}
			
		for (i=0; i < numerodepacientes; i++){
  			if (pacientesRegistrados.getTipoSanguineo() == s2){
  					pacientes[i].imprime();
			  }
			} 
		
		return 0;
	}
