
#include<iostream>
#include<locale.h>
#include<string>
#include<list>

using namespace std;

int aux;
int aux1;

class opc{
	public:
		
		string nome;
		string user;
		int senha;
		string telefone;
		string email;
		string modelo;
		float motor;
		int ano;
		string placa;
		int litros;
		string categoria;
		string lugar_origem;
		string lugar_destino;
		string lugar_partida;

		list<int> ranking_moto;
		
	void menu(){
	//	aux=0;
		
		//while(aux1!=1 || aux1!=2){
		
		cout << "Selecione: "<< endl;
		cout << "1- Sou Cadastrado" << endl;
		cout << "2- N�o sou Cadastrado" << endl;
			cin >> aux1;
		
		if(aux==1){
			
			if(aux1==1){
			//	op_moto();
			}
			
			if(aux1==2){
				cadastro_moto();
			}
		}
		if(aux == 2){
			if(aux1 ==1){
				op_us();	
			}
			if(aux1==2){
				cadastro_us();
			}
		}
	}
		
	
	void cadastro_us(){
		
		cout << "SEU CADASTRO: " << endl << endl;
		cout << "Nome: ";
			cin.ignore();
			getline(cin,nome);
		
		cout << endl << "Qual ser� seu user: ";
			cin.ignore();
			getline(cin,user);
		
		cout << endl << "Senha: (m�nimo 4 caracteres n�mericos) ";
			cin >> senha;
		
	}
	
	void cadastro_moto(){
		
		cout << "SEU CADASTRO: " << endl << endl;
		cout << "Nome: ";
			cin.ignore();
			getline(cin,nome);
		
		cout << endl << "Telefone: ";
			cin >> telefone;
			
		cout << endl << "E-mail: ";
			cin.ignore();
			getline(cin,email);
			
		cout << endl << "Qual ser� seu user: ";
			cin.ignore();
			getline(cin,user);
		
		cout << endl << "Senha: (m�nimo 4 caracteres n�mericos) ";
			cin >> senha;
			
		cout << endl << endl << "SEU CARRO: " << endl;              //opcvip - opcpop -opclight
		 
		cout << "Modelo: ";
			cin.ignore();
			getline(cin,modelo);
			
		cout << endl << "Motor: ";
			cin >> motor;
		
		cout << endl << "Ano: ";
			cin >> ano;
		
		cout << endl << "Placa: ";
			cin >> placa;
			
		cout << endl << "Capacidade do bagageiro: (em litros)";
			cin >> litros;
		
		cout << endl << endl << "SEU CARRO FOI SELECIONADO NA CATEGORIA: " << endl;
		
		if(motor >=1.8 && ano >= 2017){
			cout << "OpcVip" << endl;
			categoria = "opcvip";
		}
		
		else if(litros >= 400 && motor<1.8){
			cout << "OpcPop" << endl;
			categoria = "opcpop";
		}
		
		else{
			cout << "OpcLight" << endl;
			categoria = "opclight";
		}
	
	}
	
	void op_us(){		// Op��es do usuario
		aux=0;
		
		//ANOTA��O DIA 18.11 PEDIR LOGIN E SENHA ANTES DE EXECUTAR AS OUTRAS OP�OES -dri
	//	while(aux!=1 || aux!=2){
	
			cout << "Selecione a op��o desejada: "<< endl;
			cout << "1. Realizar corrida. "  << endl;	
			cout << "2. Ver corridas j� realizadas " << endl;
				cin>> aux;
	//	}
		if(aux==1){
			corrida();
		}	
		else{
		//	corridas_realizadas_us();
		}
	}
	
	
	void valor_rota(){
		
		
		double quilometragem[30][30]={	{21.0,   
			
			
		}
		
		
		
	};
}
	void corrida(){
		
		cout << "Para realizar a viagem voc� deve escolher o local de partida e de chegada. " << endl << endl << endl;
		cout << "1. Asa sul \t 2. Asa Norte \t 3. �guas Claras " << endl;
		cout << "4. Brazl�ndia \t 5.Candangol�ndia \t 6.Guar� "<< endl;
		cout << "7.Ceil�ndia \t 8.Cruzeiro \t 9.Fercal \t"<< endl;
		cout << "10.Gama \t 11.Itapo�  \t 12.Lago Norte \t"<< endl;
		cout << "13.Lago Sul \t 14.Nucleo Bandeirante \t 15.Parano� \t"<< endl;
		cout << "16. Park Way \t 17.Planaltina \t 18.Recanto das Emas \t"<< endl;
		cout << "19. Riacho Fundo \t 20.Samambaia \t 21. Santa Maria \t"<< endl;
		cout << "22.S�o Sebasti�o \t 23.SCIA (Cidade Estrutural) \t 24.SIA \t"<< endl;
		cout << "25.Sobradinho \t 26.Sudoeste \t 27.Taguatinga \t"<< endl;
		cout << "28.Varj�o \t 29.Vicente Pires \t 30.Jardim Bot�nico  \t"<< endl;
		
		cout << " \n\nPRIMEIRO escolha a cidade de PARTIDA: " << endl;
		cin >> lugar_origem;
		cout << " AGORA escolha a cidade de DESTINO: " << endl;
		cin >> lugar_destino;
		
		cout << "1. Asa sul \t 2. Asa Norte \t 3. �guas Claras " << endl;
		cout << "4. Brazl�ndia \t 5.Candangol�ndia \t 6.Guar� "<< endl;
		cout << "7.Ceil�ndia \t 8.Cruzeiro \t 9.Fercal \t"<< endl;
		cout << "10.Gama \t 11.Itapo�  \t 12.Lago Norte \t"<< endl;
		cout << "13.Lago Sul \t 14.Nucleo Bandeirante \t 15.Parano� \t"<< endl;
		cout << "16. Park Way \t 17.Planaltina \t 18.Recanto das Emas \t"<< endl;
		cout << "19. Riacho Fundo \t 20.Samambaia \t 21. Santa Maria \t"<< endl;
		cout << "22.S�o Sebasti�o \t 23.SCIA (Cidade Estrutural) \t 24.SIA \t"<< endl;
		cout << "25.Sobradinho \t 26.Sudoeste \t 27.Taguatinga \t"<< endl;
		cout << "28.Varj�o \t 29.Vicente Pires \t 30.Jardim Bot�nico  \t"<< endl;
			
		//Add fun��o para calcular o valor da rota    rota(lugar_origem, lugar_partida)
		//fun��o para escolher motorista
		
		cout << "Valor da viagem: " ;
		cout << "Motorista: " ;
		cout << "Carro: ";
		
		// Add funcao da corrida (     , vai avaliar o motorista)
	}
	
	void corridas_realizadas_us(){
	//vai pedir user e senha e vai ver as infos (se vai olhar na lista de motorista ou de cliente)
	cout << "User: ";
		cin >> nome;
	cout << "Senha: ";
		cin>> senha;
		//funcao hash pra saber em que posicao que aquela info ta armazenada na lista do passageiro
	cout << "As corridas que j� foram realizadas: "<< endl;
	
	}

	void corridas_realizadas_moto(){
	//vai pedir user e senha e vai ver as infos (se vai olhar na lista de motorista ou de cliente)
	cout << "User: ";
		cin >> user;
	cout << "Senha: ";
		cin>> senha;
	//funcao hash pra saber em que posicao que aquela info ta armazenada na lista do motorista
	
	cout << "As corridas que j� foram realizadas: "<< endl;
	
	}

	void op_moto(){
	
	//ANOTA��O DIA 18.11 PEDIR LOGIN E SENHA ANTES DE EXECUTAR AS OUTRAS OP�OES -dri
	cout << "Selecione a op��o desejada: "<< endl;
	while(aux!=1 ||aux!=2 || aux!=3){
	cout << "2. Ver corridas j� realizadas. " << endl;
	cout << "1. Ver minha pontua��o. "  << endl;
	cout << "3. Status do ranking. "<< endl;
		cin >> aux;		
	}
	
	if(aux==1){
		corridas_realizadas_moto();
	}
	if(aux==2){
		//funcao de pontua��o   =---- s� ser� criada ap�s a cria��o da funcao da realiza��o da corrida, pois o usuario que vai avaliar
	}
	if(aux==3){
		//funcao de status ranking
	}
	
	}	
	
};

int main(){
	
	opc la;
	
	setlocale(LC_ALL,"Portuguese");
	
	
	while(aux != 3){
	
	cout << "\t OP'c OPEN CAR " << endl<< endl;
	cout << "Quem � voc�? " << endl;
	cout << "1- Motorista" << endl;
	cout << "2- Usu�rio" << endl;
	cout << "3- Sair" << endl;
		cin >> aux;
		
	switch(aux){
		case 1:
			la.menu();
			
			break;
		case 2:
			la.menu();
			
			break;
	}
	}
	
	
	
	return 0;
}




