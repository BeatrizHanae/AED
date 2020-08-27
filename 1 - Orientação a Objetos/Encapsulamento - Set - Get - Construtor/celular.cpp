/*Este estava gravando somnente o último dado inserido.*/

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

// ----------- classe do objeto
class celular {
	
	public:
	// ----------- atributos do objeto
	float bateria; // variavel vai definir se o celular pode ser usado ou nao
	string cor;
	string marca;
	float res_camera;
	string tecnologia; // usuario escolhe entre 2G/3G/4G - trocar pra char
	bool carga; // variavel recebe '0' caso a bateria esteja em 0%
	bool destravado; // variavel recebe '0' caso o celular esteja travado
	
	// ----------- metodos do objeto
	void estado_celular (bool destravado, bool carga){
		if(destravado == false && carga == true){
			cout << "Destravar celular." << endl;
		}
		else if(carga==false){
			cout << "Por favor carregar o celular para uso." << endl;
			cout << "Porcentagem de bateria: 0%" << endl;
		}
		
		else if(destravado == true && carga == true){
			cout << "Porcentagem de bateria: " << bateria << "%" << endl;
		}
	}
	
	void dados_celular (){
		// ----------- bateria
		cout << "Qual a porcentagem atual de bateria?" << endl;
		cin >> bateria;
		
		// ----------- cor
		cout << "Qual a cor do celular?" << endl;
		cin >> cor;
		
		// ----------- marca
		cout << "Qual a marca do celular?" << endl;
		cin >> marca;
		
		// ----------- tecnologia
		cout << "Qual a tecnologia do celular? Escolha entre as opções." << endl;
		int opc;
		
			cout << "1 - 2G" << endl;
			cout << "2 - 3G" << endl;
			cout << "3 - 4G" << endl;
			cout << "4 - 4G LTE" << endl;
			cin >> opc;
			switch(opc){
				case 1:{
					tecnologia = "2G";
					break;
				}
				case 2:{
					tecnologia = "3G";
				}
				case 3:{
					tecnologia = "4G";
				}
				case 4:{
					tecnologia = "4G LTE";
				}
			
		}
		
		// ----------- res_camera
		cout << "Qual a resolucao da camera do celular? Somente o numero." << endl;
		cin >> res_camera;	
	}
	
	void lendo_dados(){
		cout << bateria << endl;
		cout << cor << endl;
		cout << marca << endl;
		cout << tecnologia << endl;
		cout << res_camera << endl;
	}
	
	
};

// ----------- menu simples de inicio
int primeiromenu(){
	celular objeto;
	objeto.carga = true; 
	objeto.destravado = true;
	int opcao;
		cout << "1 - Inserir dados do celular" << endl;
		cout << "2 - Consultar estado do celular" << endl;
		cout << "3 - Sair" << endl;
		cin >> opcao;
		switch(opcao){
			case 1:{
				objeto.dados_celular();
				break;
			}
			case 2:{
				objeto.estado_celular(objeto.destravado, objeto.carga);
				break;
			}
			case 3:{
				exit(3);
				break;
			}
		}
}


// ----------- segundo menu
int segundomenu (){
	celular objeto;
	objeto.carga = true; 
	objeto.destravado = true;
	int opcao;
	while(3){
		cout << "1 - Inserir dados do celular" << endl;
		cout << "2 - Consultar estado do celular" << endl;
		cout << "3 - Consultar dados do celular" << endl;
		cout << "4 - Sair" << endl;
		cin >> opcao;
		switch(opcao){
			case 1:{
				objeto.dados_celular();
				break;
			}
			case 2:{
				objeto.estado_celular(objeto.destravado, objeto.carga);
				break;
			}
			case 3:{
				objeto.lendo_dados();
				break;
			}
			case 4:{
				exit(3);
				break;
			}
		}
	}
}

	

// ----------- main: usado para chamar os metodos e funcoes
int main(){
	
	primeiromenu();
	segundomenu();
	
	return 0;
}
