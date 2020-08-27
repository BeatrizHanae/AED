//DESAFIO 3 DE ARVORE PARTE 1
//Beatriz Hanae - 160113814

#include <iostream>
#include <set>
#include <stack>
#include <queue>

using namespace std;

class Empresas{
	private:
		int ID;
		string nome;
		
	public:
		Empresas(){
		}
		
		string getNome(){
			return nome;
		}
		int get(){
			return ID;
		}
		
		void setID(int novoID){
			ID = novoID;
		}
		void setNome(string novoNome){
			nome = novoNome;
		}
		
		friend ostream& operator << (ostream& os, const Empresas& E){
			os << "ID:" <<E.ID << endl;
			os << "Nome do Funcionário: " << E.nome << endl;
			return os;
		}
		friend bool operator< (const Empresas &left, const Empresas &right);
};

		bool operator< (const Empresas &left, const Empresas &right){
			return left.ID < right.ID;
		}

int main(){
	stack<Empresas>Alfa;
	Empresas alfa;
	
	alfa.setID(33);
	alfa.setNome("Rafaela Dir. Acionista - Alfa");
	Alfa.push(alfa);
	
	alfa.setID(39);
	alfa.setNome(" Beatriz Dir. Acionista - Alfa");
	Alfa.push(alfa);
		
	alfa.setID(49);
	alfa.setNome("Bianca Dir. Acionista - Alfa");
	Alfa.push(alfa);
		
	alfa.setID(37);
	alfa.setNome("Mirella Dir. Area - Alfa");
	Alfa.push(alfa);
		
	alfa.setID(45);
	alfa.setNome("Juliana Dir. Area - Alfa");
	Alfa.push(alfa);
		
	alfa.setID(40);
	alfa.setNome("Adrielle Presidente - Alfa");
	Alfa.push(alfa);	
	
	queue <Empresas> Beta;
	Empresas beta;
	
	beta.setID(80);
	beta.setNome("Leticia Presidente - Beta");
	Beta.push(beta);
		
	beta.setID(77);
	beta.setNome("Joana Dir. Area - Beta");
	Beta.push(beta);
		
	beta.setID(85);
	beta.setNome("Fabiana Dir.Area - Beta");
	Beta.push(beta);
		
	beta.setID(89);
	beta.setNome("Karen Dir. Acionista - Beta");
	Beta.push(beta);
		
	beta.setID(79);
	beta.setNome("Mariana Dir. Acionista - Beta");
	Beta.push(beta);
		
	beta.setID(73);
	beta.setNome("Sofia Dir. Acionista - Beta");
	Beta.push(beta);
	
	Empresas gama;
	Empresas aux;
	set<Empresas> arvoreEmpresas;
	
	gama.setID(50);
	gama.setNome("Vinicius Presidente - Gama");
	arvoreEmpresas.insert(gama);
	
	cout << "Ordem Alfa: "<< endl;
	
	while(!Alfa.empty()){
		cout <<Alfa.top()<<endl;
		aux = Alfa.top();
		arvoreEmpresas.insert(aux);
		Alfa.pop();
	}
	cout << endl;
	
	cout << "Ordem Beta: " <<endl;
	while(!Beta.empty()){
		cout <<Beta.front()<<endl;
		aux = Beta.front();
		arvoreEmpresas.insert(aux);
		Beta.pop();
	}
	cout << endl;
	cout << "Ordem Gama"<<endl;
	set<Empresas>:: iterator it = arvoreEmpresas.begin();
	advance(it,6);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,3);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,1);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,0);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,2);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,4);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,5);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,10);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,8);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,7);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,9);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,11);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	advance(it,12);
	cout << " " << *it << endl;
	it = arvoreEmpresas.begin();
	
	return 0;
}
