/*Este programa faz as funcionalidade do celular e vai diminuindo a bateria.*/

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

// ----------- classe do objeto
class celular {
	
	public:
	// ----------- atributos do objeto
	float bateria; // variavel vai definir se o celular pode ser usado ou nao
	string modelo;
	string cor;
	int megapixel;
	bool ligar;
	bool foto;
	string mensagem;
	string aplicativo;
	bool carga; // variavel recebe '0' caso a bateria esteja em 0%
	bool destravado; // variavel recebe '0' caso o celular esteja travado
	
	// ----------- metodos do objeto
	void estado_celular (bool destravado, bool carga){
		if(this->bateria <= 0){
			cout << "Fim da Bateria" << endl << "Desligando..." << endl;
			exit(1);
		}
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
		
	
	void fazer_ligacao (bool ligar){	
		
		if (destravado == true && carga == true){	
			cout << "Ligacao completada!" << endl;
			this->bateria = this->bateria - 20;
		}
		else {
			cout << "Nao foi possivel completar a ligacao." << endl; 
		}
	}
	
	void mandar_mensagem (string mensagem){
		if (destravado == true && carga == true){
			
			cout << "Digite a mensagem que deseja enviar:" <<endl;
			cin >> mensagem;
			cout << "Mensagem enviada!" << endl;
			this->bateria = this->bateria - 10;
		}
		else {
			cout << "Nao foi possivel enviar a mensagem, tente novamente." <<endl;
		}
	}
	void fotografar (bool foto){
		if (destravado == true && carga == true){
			
			cout << "Foto registrada!" <<endl;
			this->bateria = this->bateria - 25;
		}
		else {
			cout << "Nao foi possivel capturar a foto!" << endl;
		}
	}
	void abrir_aplicativo (string aplicativo){
		if (destravado == true && carga == true){
			cout << "Qual aplicativo deseja abrir?" << endl;
			cin >> aplicativo;
			cout << "Aplicativo: " << aplicativo << " aberto!" << endl;
			this->bateria = this->bateria - 40;
		} else {
			cout << "Nao foi possivel abrir o aplicativo!" << endl;
		}
	}
	void segundomenu(){
		int opc;
		
			cout << "1 - Ligar" << endl;
			cout << "2 - Mandar mensagem" << endl;
			cout << "3 - Tirar foto " << endl;
			cout << "4 - Abrir app" << endl;
			cin >> opc;
			switch(opc){
				case 1:{
					fazer_ligacao(ligar);
					this->estado_celular(this->destravado, this->carga);
					break;
				}
				case 2:{
					mandar_mensagem(mensagem);
					this->estado_celular(this->destravado, this->carga);
					break;
				}
				case 3:{
					fotografar(foto);
					this->estado_celular(this->destravado, this->carga);
					break;
				}
				case 4:{
					abrir_aplicativo(aplicativo);
					this->estado_celular(this->destravado, this->carga);
					break;
				}
			
		}	
	}

	void consultarBateria(){
		cout << "Nivel de bateria " << this->bateria << "%" << endl;
	}
	
};


// ----------- menu simples de inicio
int primeiromenu(celular* objeto){

	int opcao;
		cout << "1 - Consultar estado do celular." << endl;
		cout << "2 - Usar o celular." << endl;
		cout << "3 - Sair" << endl;
		cin >> opcao;
		switch(opcao){
			case 1:{
				objeto->estado_celular(objeto->destravado, objeto->carga);
				break;
			}
			case 2:{
				objeto->segundomenu();
				break;
			}
			case 3:{
				exit(3);
				break;
			}
		}

}


// ----------- main: usado para chamar os metodos e funcoes
int main(){
    celular objeto;
    objeto.bateria = 80;
    objeto.modelo = "Xiomi MI9 SE";
    objeto.cor = "Rosa";
    objeto.megapixel = 12;
    objeto.carga = true; 
    objeto.destravado = true;
    
    while(true){

    	 primeiromenu(&objeto);
	}
   
    
    return 0;
}
