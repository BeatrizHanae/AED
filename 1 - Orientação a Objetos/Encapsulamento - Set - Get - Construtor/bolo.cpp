/*Beatriz Hanae Fujimoto -  160113814*/

#include <iostream>

using namespace std;

class Bolo {
	int largura;
	int comprimento;
	int kilo;
	string recheio;
	string cliente;

public:
	Bolo () {
		kilo =0;
		recheio = "N/A";
		cliente = "N/A";
	}
	
	void setLargura (int l){
		largura = l;
	}
	
	void setComprimento (int c){
		comprimento = c;
	}
	
	void setKilo(int k){
		kilo = k;
	}
	
	int getKilo(){
		return kilo;
	}

	void setRecheio (string r){
		recheio = r;
	}
	
	string getRecheio(){
		return recheio;
	}
	
	void setCliente (string cl){
		cliente =  cl;
	}
	
	string getCliente (){
		return cliente;
	}
	
	void calculaKilo (){

        kilo = largura*comprimento*1.5;
    }
        
    void imprimeNota(){
    	cout << "\n" <<"Dados do bolo: " << endl;
		cout << "Kilograma do bolo- " << kilo << endl;
		cout << "Recheio- " << recheio << endl;
		cout << "Nome do Cliente- " << cliente << "\n" <<endl;
    	
	}
};

int main () {
	Bolo bolo1, bolo2;
	int larg, compri;
	string cliente, recheio;
	
	bolo2.setLargura(25);
	bolo2.setComprimento(20);
	bolo2.setRecheio("Chocolate");
	bolo2.setCliente(cliente);
	
		cout << "Qual a largura do bolo?" << endl;
		cin >> larg;
		cout << "Qual o comprimento do bolo?" << endl;
		cin >> compri;
		cout << "Qual o recheio?" << endl;
		cin >> recheio;
		cout << "Qual o nome do cliente?" << endl;
		cin >> cliente;

	bolo1.setLargura (larg);
	bolo1.setComprimento (compri);
	bolo1.setRecheio(recheio);
	bolo1.setCliente(cliente);
	
	
		bolo1.calculaKilo();
		bolo1.imprimeNota();
		bolo2.calculaKilo();
		bolo2.imprimeNota();

return 0;
}
