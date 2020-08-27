#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

class Caneta{  // Essa ? a classe do objeto caneta, ou seja, o seu templete. Nele, estar?o presentes m?todos e atributos.
	
	public:
	
	// Atributos do objeto ->
	
	float volume_de_tinta;  // Repare que poder?amos deixar essa vari?vel sendo controlada por um sensor de volume dentro da caneta.
	string cor;
	string marca;
	string modelo;
	bool carga; // A vari?vel do tipo booleana recebe '1' para uma caneta com carga e '0' para uma caneta sem carga.
	bool tampada;
	string palavra;

	// M?todos do objeto ->
	
	void estado_caneta (bool tampada, bool carga){  // M?todo que verifica o estado atual de carga e tampa da caneta.
		
		if(tampada == false && carga == true){
			
			cout << "Caneta pronta para uso" << endl;
			cout << "Volume de tinta : " << volume_de_tinta << "%" << endl;
		}
		else if(tampada == false && carga == false){
			
			cout << "Por favor carregar a caneta para uso" << endl;
			cout << "Volume de tinta : 0%" << endl;
		}
		else if(tampada == true && carga == false){
			
			cout << "Por favor destampar a caneta e colocar carga" << endl;
			cout << "Volume de tinta : 0%" << endl;
		}
		else if(tampada == true && carga == true){
			
			cout << "Favor destampar a caneta" << endl;
			cout << "Volume de tinta : " << volume_de_tinta << "%" << endl;
		}
	}
	
	void escrever(string palavra){
		
		if(tampada == false && carga == true){  // A cada palavra escrita o volume de tinta ir? abaixar 0,5%, apenas para ilustrar
			
			cout << "Digite a palavra que deseja escrever: " << endl;
			cin >> palavra;
			volume_de_tinta = volume_de_tinta - 0.5;
			cout << "A palavra : '" << palavra << "' foi escrita com sucesso!" << endl; 
		}
		else{
			
			cout << "Ops, algo deu errado! Verifique o estado da caneta." << endl;
		}
	}
	
};

int main(){
	
	Caneta objeto;  // Aqui instanciamos a classe e criamos o objeto.
	int aux;
	objeto.volume_de_tinta = 70; //  Volume de tinta padr?o
	objeto.cor = "azul";
	objeto.marca = "BIC";
	objeto.modelo = "AX-soft";
	objeto.carga = true; 
	objeto.tampada = false;
	
	
	while(3){
	
	cout << "1- Consultar estado da caneta" << endl;
	cout << "2- Escrever" << endl;
	cout << "3- Sair" << endl;


	cin >> aux;
	
	switch(aux){  // Switch utilizado como controlador de a??es da caneta
		
		case 1:{
			
			objeto.estado_caneta(objeto.tampada, objeto.carga);
			
			break;
		}
		case 2:{
			
			objeto.escrever(objeto.palavra);
			
			break;
		}
		case 3:{
			
			exit(3);
			
			break;
		}
	}	
}
	return 0;
}
