		#include<iostream>
#include<locale.h>
#include<string>
#include<list>
#include<ctime>
#include<windows.h>
#include<math.h>
#include<set>

using namespace std;

int aux;
int aux1;

class opc{
	public:
		
		string nome;
		string user;
		string senha;
		string telefone;
		string email;
		string modelo;
		float motor;
		int ano;
		string placa;
		int litros;
		string categoria;
		int lugar_origem;
		int lugar_destino;
		char op_viagem;
		int estrelas;
		float km;
		char op_parada;
		int parada;
		
		time_t t;

		list<int> ranking_moto;
		
		list<string> usuario_senha;
		list<string>usuario_user;
		list<double> usuario_cr_preco;
		
		list<string>:: iterator it_user;
		list<string>:: iterator it_senha;
		
		list<string> motorista_senha;
		list<string> motorista_user;
		list<string> motorista_nome;
		list<string> motorista_modelo;
		list<string> motorista_placa;
		list<string> motorista_categoria;
		
		list<string> motorista_cr_nome;
		list<double> motorista_cr_preco;
		
		list<string>:: iterator it_modelo;
		list<string>:: iterator it_placa;
		list <double>::iterator it_cr_preco;
		list <string>::iterator it_cr_nome;
		
		set<int>estrelas_moto;
		set<int>::iterator it_estrelas;
		
		list<float>km_us;
		list<float>valor;
	
		int cont_moto=0;  //contador para saber se pelo menos um motorista foi cadastrado
	
		float valor_corrida = 0;
		double valor_corrida_parada;
		double valor_corrida_final;
		double valor_corrida_total;
		
		double quilometragem[33][33] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //linha 0
			{0,0,7.5,19.7,51.8,12.9,12.7,28.8,13.8,33.0,31.9,25.8,18.8,8.2,12.9,18.7,12.6,48.6,33.9,19.5,28.7,26.5,23.2,20.8,12.1,28.8,12.6,23.6,18.0,17.8,18.3},//linha 1
			{0,5.5,0.0,27.6,51.2,18.4,18.2,32.3,11.2,26.3,37.4,25.6,12.1,11.0,18.4,20.8,18.1,41.9,39.3,25.0,34.2,32.0,25.3,20.4,17.5,22.1,9.8, 0.0,11.3,23.3,20.4},//linha 2
			{0,21,26.9,0,36.6,12.6,9.9,12.2,14.5,41.5,33.4,42.7,28.4,23.7,11.9,38.5,14.1,57.1,12.8,8.3,13.1,28,42.6,12.7,10.4,37.3,15.6,6.9,27.6,6.7,37}, //linha 3
			{0,50.4,54.7,37.6,0.0,51.0,42.1,30.1,42.5,67.9,71.7,69.2,54.9,55.6,49.5,64.5,52.5,83.5,45.1,40.6,36.1,66.4,69.1,38.7,42.6,63.7,45.3,31.2,54.1,34,64.2}, //linha4 
			{0,12.6,17.7,11.3,51.1,0.0,7.9,26.6,8.8,35.8,24.1,33.6,22.7,12.3,4.1,26.5,4.8,51.3,26.1,8.7,17.9,18.7,31.1,17.9,9.8,31.5,10.1,21.4,21.9,15.1,25.6}, //linha 5
			{0,15.1,20.4,10.2,42.3,9.1,0.0,19.2,8.7,35.7,29.8,36.9,22.6,15,7.3,29.2,10.5,51.2,20.6,11.7,20.9,24.4,33.8,10.5,4.6,31.5,9.8,14,21.8,8.3,28.9}, //linha 6
			{0,29.9,38.5,12.9,28,27.8,18.8,0.0,23.4,51.7,31.2,53,38.7,34,23.1,48.2,29.2,67.3,16.9,18.9,7.5,30.2,52.8,17.9,19.3,47.5,24.6,7.0,37.9,17.8,46.5}, //linha 7
			{0,11.5,15.4,14.6,44,11.9,9.1,25.1,0.0,28.7,32.6,29.9,15.6,14.1,13.6,24.2,13.3,44.2,34.6,17.4,23.8,27.2,28.8,15,6.9,24.5,2.6,18.4,14.8,12.7,23.8}, //linha 8
			{0,29.2,23.8,41.7,67.3,37.1,35.5,48.3,28.3,0.0,57.8,26.4,24.2,34.8,39.2,36,38.5,35,51.6,42.7,51.9,52.4,49.3,43.4,33,15.2,29.4,42.4,23.2,39.8,44.4}, //linha 9
			{0,33.8,38.4,33.3,61.5,24.1,30.5,31.7,31.3,58.3,0.0,59.6,45.3,31.8,24.2,47.6,23.9,73.9,18.9,24.7,24.2,11.6,42.6,40.5,32.4,54.1,32.7,31.8,44.5,38.2,42.6},//linha 10
			{0,28.6,23.1,43.6,69.4,36.3,36.6,49.2,30.3,26.5,57.6,0.0,21.3,23.9,37.2,13.4,37.8,26.4,59.4,41.9,51.1,48.7,26.4,47.5,34.9,18.3,31.3,44.6,15.8,41.8,21.5}, //linha 11
			{0,15.2,9.8,29.4,55.1,27.7,23.2,34.9,16,25,45.5,20.3,0.0,23.9,28.1,27.3,26.2,40.6,49.1,30.4,38.6,40.1,33.5,33.2,20.6,20.8,17,30.3,6.0,27.5,28.6}, //linha 12 
			{0,9.5,11.6,22.2,55.7,13,15.2,34.2,18.1,36.5,31.9,28.8,22.3,0.0,12.9,19.9,12.6,52.1,33.9,19.5,28.7,26.5,19.8,25.4,17.4,32.3,13,27.1,21.5,21.4,14.9}, //linha 13
			{0,14.4,19.6,9.7,53,3.3,9.8,22.3,10.6,37.6,24.1,38.8,24.5,14.2,0.0,29.1,4.9,53.2,14.8,6.8,16,18.8,33,14,11.7,33.4,12,17.5,23.7,11.6,28}, //linha 14
			{0,19.3,27.9,38.3,66.6,30.1,30.3,47.7,31.4,34.7,47.7,12.3,28.9,17.7,31,0.0,30.7,36.9,49.5,36.8,54.8,38.8,16.5,22.8,32.5,27,25.2,41.8,22.5,38.5,11.5},//linha 15
			{0,15.5,20.6,14.1,50.3,8.3,14.8,26.7,16.4,42.5,19.3,37.2,29.2,14.1,5.4,30,0.0,54.1,20.1,18.3,20.4,16.8,30.5,18.7,15.4,38.4,16.4,20.6,28.3,21.1,25.6}, //linha 16
			{0,46.6,41.1,57.5,83.1,52.7,51.3,64.1,45,34.4,78.5,26.1,39.8,48.2,53.7,37.6,54.1,0.0,67.2,81.2,66.7,44.5,50.6,47.6,43.2,22.4,45,58.2,58.2,59.2,45.7}, //linha 17
			{0,28.2,33.3,12.6,46.6,17,21.3,16.8,25.7,51.2,16.7,51.7,38.3,27.7,14.1,42.1,18.6,66.9,0.0,6.9,9.3,15.9,43.4,24.8,23.7,47.1,25.7,14.1,37.5,21.7,39.2}, //linha 18
			{0,32.1,36.6,17.2,45.6,18.1,26.6,20.1,29.0,54.5,22.4,41.4,30.5,19.9,6.3,34.3,10.8,29.1,8.1,0.0,11.3,24.3,38.9,19.3,15.9,39.3,17.9,11.5,29.7,15.2,34.0},//linha 19
			{0,30.6,33.8,12.2,33.1,18.8,18.2,7.7,25.4,51.2,24.0,51.1,38.2,29.8,15.9,43.9,20.4,66.9,9.7,13.9,0.0,23.0,48.5,19.6,18.7,47.1,25.4,10.1,37.44,17.0,43.6},//linha 20
			{0,27.7,32.8,27.8,61.0,18.6,25.0,31.2,27.2,52.7,11.4,47.0,39.8,26.3,18.7,38.1,18.4,68.4,18.4,19.0,23.7,0.0,33.1,29.0,25.2,49.6,27.2,29.6,39.0,34.2,33.1},//linha 21
			{0,22.8,25.3,41.7,70.0,33.5,33.7,50.9,28.7,46.4,42.7,25.0,32.3,18.3,34.4,16.1,34.9,49.6,44.5,45.0,48.2,33.8,0.0,34.6,32.4,39.7,28.7,45.7,31.5,41.4,11.1},//linha 22
			{0,15.5,16.3,10.7,36.2,13.1,6.7,16.1,9.6,33.0,34.1,33.5,20.0,19.7,13.9,29.6,14.8,48.7,23.8,28.1,19.9,28.8,34.2,0.0,4.1,28.9,9.6,11.5,19.2,10.3,29.3},//linha 23
			{0,12.2,15.7,9.8,41.9,10.5,4.2,18.9,6.3,33.0,31.2,31.8,20.1,15.2,11.5,27.9,11.9,48.7,22.9,27.2,19.0,25.8,35.5,4.4,0.0,28.9,6.3,13.6,19.3,9.3,30.6},//linha 24
			{0,25.0,19.6,39.9,63.1,32.9,31.3,44.1,24.1,14.7,53.6,18.3,20.0,30.6,33.9,27.9,34.3,23.6,47.4,38.5,47.7,48.3,45.1,27.6,28.8,0.0,25.2,38.3,19.0,62.7,40.2},//linha 25
			{0,7.9,9.8,18.0,46.6,12.5,10.1,24.7,3.0,30.3,33.2,31.5,17.2,13.2,13.5,22.0,13.9,45.9,27.0,18.1,24.8,27.9,26.6,11.1,7.9,26.1,0.0,19.4,16.4,46.2,21.7},//linha 26
			{0,24.9,29.2,7.8,31.5,18.3,13.8,6.3,17.0,42.3,29.9,43.7,29.4,29.0,15.4,43.2,24.2,58.0,15.6,11.1,10.7,28.9,46.2,11.9,14.3,38.2,19.5,0.0,28.6,31.1,42.9},//linha 27
			{0,14.3,8.8,28.5,54.2,27.2,27.0,33.9,15.0,19.4,46.2,16.2,7.0,23.0,27.2,23.2,26.9,49.0,42.7,33.8,43.0,40.8,32.6,18.7,19.6,14.8,16.1,29.1,0.0,26.9,27.7},//linha 28
			{0,19.4,23.8,6.0,34.7,13.5,8.1,12.4,11.6,37.4,34.4,38.2,23.9,21.8,12.9,33.6,15.2,52.6,23,0.14,1.14,6,29.0,38.1,6.5,8.6,32.8,14.4,6.4,23.1,0.0,33.2},//linha 29
			{0,18.0,20.6,37.0,65.3,25.2,28.9,46.1,23.8,41.7,42.8,20.2,27.5,13.6,25.2,11.3,51.6,44.8,44.6,31.8,57.3,33.9,11.6,29.8,298,34.9,23.9,40.4,26.7,35.1,0.0}};//linha 30

		
	void menu(){
	
		cout << "Selecione: "<< endl;
		cout << "1- Sou Cadastrado" << endl;
		cout << "2- Não sou Cadastrado" << endl;
			cin >> aux1;
		
		system("cls");
		while(aux1<1 || aux1>2){
			cout << "Opção inválida! Digite novamente: "<< endl;
			cin >> aux1;
		};
	
		if(aux==1){	// se for motorista
			
			if(aux1==1){
				op_moto();
			}
			
			if(aux1==2){
				cadastro_moto();
			}
		}
		if(aux == 2){		//se for passageiro
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
		
		cout << endl << "Qual será seu user: ";
		//	cin.ignore();
			getline(cin,user);
		
		cout << endl << "Senha (mínimo 4 caracteres númericos): ";
			cin >> senha;
		
		usuario_user.push_front(user);		//guardando user e senha em uma lista 
		usuario_senha.push_front(senha);
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
			
		cout << endl << "Qual será seu user: ";
			getline(cin,user);
		
		cout << endl << "Senha (mínimo 4 caracteres númericos): ";
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
		cont_moto ++;
		
	//guardando informações numa lista 
	motorista_nome.push_front(nome);
	motorista_user.push_front(user);
	motorista_senha.push_front(senha);	
	motorista_modelo.push_front(modelo);
	motorista_placa.push_front(placa);
	motorista_categoria.push_front(categoria);
	}
	
	int verifica_us(){
	
		int autoriza=0;
		char aswr;
		
		string user_aux;
		string senha_aux;
		
		inicio_verifica_us:
		cout << "\n Digite seu login e senha para prosseguir: " << endl;
		
		cout << "User: " ;
		cin >> user_aux;
		
		cout << "Senha: ";
		cin >> senha_aux;
		
		for(it_user=usuario_user.begin(), it_senha = usuario_senha.begin() ; it_user != usuario_user.end(),it_senha != usuario_senha.end() ; it_user++,it_senha++){
			//lendo usuarios e senhas a partir de um iterator 
			if(*it_user == user_aux){	
				cout << "Usuario encontrado!" << endl;	
				
				if(*it_senha==senha_aux){
					cout << "Senha correta! "<< endl;
					autoriza=1;
				}
				if(*it_senha!=senha_aux){
					cout << "Senha incorreta!" << endl;
					autoriza=0;
				}
			//	it_user=usuario_user.end();  //pra acabar o loop
			//	it_senha=usuario_senha.end();
			}
		}
		
		if (autoriza==0){
			cout << "Gostaria de tentar novamente? (s/n) " << endl;
			cin >> aswr;
				if(aswr=='s'){
					goto inicio_verifica_us;
				}
			
		}
		
		cout << endl << endl;
	return autoriza;	
	}
	
	void op_us(){		// Opções do usuario
		aux=0;
		
			if(verifica_us()==1){ //verificação se contem cadastro 
			cout << "Selecione a opção desejada: "<< endl;
			
			cout << "1. Realizar corrida. "  << endl;	
			cout << "2. Acessar rota." << endl;
			cout << "3. Visualizar dinheiro já gasto. " << endl;
			cout << "4. Sair do programa. " << endl; 
				cin>> aux;
			
			system("cls");	
			while(aux<1 || aux>4){
				cout << "Opção inválida! Digite novamente: "<< endl;
				cin >> aux;
			}
			
				if(aux==1){
					if(cont_moto!=0){
						corrida(); //função de realizar corrida 
					}
					else{
						cout << "ERRO! Ainda não há motoristas cadastrados!" << endl; //caso não tenha motoristas cadastrados irá apresentar um erro 
					}
				}	
				if(aux==2){
					google_maps();
				}
				if(aux==3){
					corridas_realizadas_user();
				}
				if(aux==4){
					exit(4);
				}
		}
			else{
				cout << "Acesso não autorizado! "<< endl << endl;
			}	
}


	void google_maps(){
	//caso a pessoa queira acessar a rota e ver transito 
		string lugar_partida;
		string lugar_final;
		string resp;
				
		cout << "Para realizar a PESQUISA DE ROTA você deve escolher o local de partida e de chegada. " << endl << endl << endl;
		cout << "1. Asa sul \t 2. Asa Norte \t 3. Águas Claras " << endl;
		cout << "4. Brazlândia \t 5.Candangolândia \t 6.Guará "<< endl;
		cout << "7.Ceilândia \t 8.Cruzeiro \t 9.Fercal \t"<< endl;
		cout << "10.Gama \t 11.Itapoã  \t 12.Lago Norte \t"<< endl;
		cout << "13.Lago Sul \t 14.Nucleo Bandeirante \t 15.Paranoá \t"<< endl;
		cout << "16. Park Way \t 17.Planaltina \t 18.Recanto das Emas \t"<< endl;
		cout << "19. Riacho Fundo \t 20.Samambaia \t 21. Santa Maria \t"<< endl;
		cout << "22.São Sebastião \t 23.SCIA (Cidade Estrutural) \t 24.SIA \t"<< endl;
		cout << "25.Sobradinho \t 26.Sudoeste \t 27.Taguatinga \t"<< endl;
		cout << "28.Varjão \t 29.Vicente Pires \t 30.Jardim Botânico  \t"<< endl;
		
		cout << " \n\nPRIMEIRO escolha a cidade de PARTIDA (Para preencher, no lugar do espaço entre duas palavras,siga o exemplo: Asa+Norte, Aguas+Claras): " << endl;
		cin >> lugar_partida;
		cout << " AGORA escolha a cidade de DESTINO (Para preencher, no lugar do espaço entre duas palavras,siga o exemplo: Asa+Norte, Aguas+Claras): " << endl;
		cin >> lugar_final;
		
		string partida = lugar_partida+"+Brasilia+DF/";
		string final = lugar_final+"+Brasilia+DF/";
		string open_url = "https://www.google.com.br/maps/dir/";
   		string q = open_url+partida+final;
   
   		ShellExecute (0, "open", q.c_str(), NULL , NULL, 1);
   		
   		cout << "Deseja voltar para o menu? (Sim ou Nao)" << endl;
   		cin >> resp;
   		if (resp == "Sim"){
   			op_us(); 
		   }
		if (resp == "Nao"){
			corrida();
		}	
	}
	
	double valor_rota(int origem, int partida){ //função ira retornar o valor da corrida com respeito a segurança e local das cidades 
		
		float a;
		
		if(origem == 4 || origem == 9 || origem == 15 || origem == 17 || origem == 21 || origem == 22 || origem == 25 || origem == 28){
			valor_corrida = quilometragem[origem][partida]*2.0;
		}
		
		else if(origem == 7 || origem == 10 || origem == 11 || origem == 18 || origem == 20 || origem == 23){
			valor_corrida = quilometragem[origem][partida]*1.9;
		}
		
		else{
			valor_corrida = quilometragem[origem][partida]*1.65;
		}

		a = valor_corrida;
		//valor.push_front(valor_corrida);
		return a;
	}
	
	double valor_parada(int origem, int partida, int parada){
		//caso ele faça alguma parada é necessario uma outra logica para o valor 
		
		if(origem == 4 || origem == 9 || origem == 15 || origem == 17 || origem == 21 || origem == 22 || origem == 25 || origem == 28){
			valor_corrida_parada = quilometragem[origem][parada]*1.8;
		}
		else if(origem == 7 || origem == 10 || origem == 11 || origem == 18 || origem == 20 || origem == 23){
			valor_corrida_parada = quilometragem[origem][parada]*1.7;
		}
		else{
		valor_corrida_parada = quilometragem[origem][parada]*1.55;
		}
		
		if(origem == 4 || origem == 9 || origem == 15 || origem == 17 || origem == 21 || origem == 22 || origem == 25 || origem == 28){
			valor_corrida_final = quilometragem[parada][partida]*1.8;
		}
		
		else if(origem == 7 || origem == 10 || origem == 11 || origem == 18 || origem == 20 || origem == 23){
			valor_corrida_final = quilometragem[parada][partida]*1.7;
		}
		
		else{
		valor_corrida_final = quilometragem[parada][partida]*1.55;
		}
		
		valor_corrida_total = valor_corrida_parada + valor_corrida_final;
		
		return valor_corrida_total;
	}
	
	void tempo(){  
	int t, j;
	int n = 999999;
	int freq = n - 1;
		clock_t x;
		x = clock();
		for (t=2; t<=n;t++){
			for (j=sqrt(t); j>1;j--){
				if(t%j == 0){
					--freq;
					break;
				}
			}
		}
		x = clock() - x;
	}
	
	string motorista_viagem(){ //como escolher o motorista para a viagem 
		int cont_quant_moto=0;
		string nome_moto;
		
			cout << "As opções de motoristas são: " << endl;
			
			for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
				cout << cont_quant_moto+1 << ". " << *it_user << endl; 
				cont_quant_moto++ ;
			}
			cout << "Digite o nome do motorista escolhido: " << endl;
			cin >> nome_moto;
			
		/*	for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
			
				if(nome_moto== *it_user){
				nome_moto = *it_user;	
						
				} 
			}*/
	 return nome_moto;		
	}
	

	void corrida(){
		
		string nome_moto_aux;
		char op_mensagem;
		string mensagem;
		int cont_pos;
		double preco_aux_oficial;
		double preco_aux;
		cont_pos = 0;
		
		viagem: 
		cout << "\tVAMOS INICIAR A CORRIDA: " << endl << endl;
		cout << "Para realizar a viagem você deve escolher o local de PARTIDA e de CHEGADA. " << endl << endl << endl;
		cout << "1. Asa sul \t         2. Asa Norte \t               3. Águas Claras " << endl;
		cout << "4. Brazlândia \t         5.Candangolândia \t       6.Guará "<< endl;
		cout << "7.Ceilândia \t         8.Cruzeiro \t               9.Fercal \t"<< endl;
		cout << "10.Gama \t         11.Itapoã  \t               12.Lago Norte \t"<< endl;
		cout << "13.Lago Sul \t         14.Nucleo Bandeirante \t       15.Paranoá \t"<< endl;
		cout << "16. Park Way \t         17.Planaltina \t               18.Recanto das Emas \t"<< endl;
		cout << "19. Riacho Fundo \t 20.Samambaia \t               21. Santa Maria \t"<< endl;
		cout << "22.São Sebastião \t 23.SCIA(Cidade Estrutural)\t24.SIA \t"<< endl;
		cout << "25.Sobradinho \t         26.Sudoeste \t               27.Taguatinga \t"<< endl;
		cout << "28.Varjão \t         29.Vicente Pires \t       30.Jardim Botânico  \t"<< endl;
		
		cout << endl;
		cout << "Opcional: Você deseja realizar alguma parada antes de seu destino final? (s/n)" << endl;
			cin >> op_parada;
		
		cout << endl;
			
		//	motorista_viagem();
		
			nome_moto_aux =motorista_viagem(); //igualando o nome escolhido a uma variavel 
			
			cout << endl;
			
			if(op_parada == 's' || op_parada == 'S'){
				while(lugar_origem>30 || lugar_origem<1 ||lugar_destino>30 || lugar_destino<1){ // while de verificação
				cout << "Digite o número correspondente ao local de parada: " << endl;
					cin >> parada; 
				cout << " \n\nCidade de PARTIDA: " << endl;
					cin >> lugar_origem;
				cout << " Cidade de DESTINO: " << endl;
					cin >> lugar_destino;
				}
				cout << "Quilômetros a serem percorridos: " << (quilometragem[lugar_origem][parada]) + (quilometragem[parada][lugar_destino]) << endl;
				cout << "Valor da viagem: R$ " << valor_parada(lugar_origem, lugar_destino, parada)  << endl;
				cout << "Motorista ";
				
				
				preco_aux = valor_parada(lugar_origem, lugar_destino, parada);
				it_modelo = motorista_modelo.begin();
				it_placa = motorista_placa.begin();
				it_cr_preco = motorista_cr_preco.begin();
			
				for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
					if(nome_moto_aux== *it_user){
				 		cout << *it_user << endl;
				 		cout << "Modelo = " << *it_modelo << endl;
				 		cout << "Placa: " << *it_placa << endl;
				 		
				 		preco_aux += *it_cr_preco;
				 	
				 		motorista_cr_preco.insert(it_cr_preco, preco_aux);				
					} 
					it_modelo++;
					it_placa++;
					cont_pos++;
					it_cr_preco++;
				}
				
				
				
				string nome_user_aux;					//pra add o dinehro gasto do usuario
				cout << "Confirme nome de usuário : " << endl;
				cin >> nome_user_aux;
				it_cr_preco = usuario_cr_preco.begin();
				for(it_user= usuario_user.begin() ; it_user!= usuario_user.end() ; it_user++){
					if(nome_user_aux== *it_user){
						usuario_cr_preco.insert(it_cr_preco, preco_aux);
					}
					it_cr_preco++;
				}
				
				
				
			//	motorista_viagem();
			}
				
			if(op_parada == 'n' || op_parada == 'N'){
				cont_pos = 0;
				preco_aux=0;
				
				while(lugar_origem>30 || lugar_origem<1 ||lugar_destino>30 || lugar_destino<1){ // while de verificação
					cout << " \n\nPRIMEIRO escolha a cidade de PARTIDA: " << endl;
						cin >> lugar_origem;
					cout << " AGORA escolha a cidade de DESTINO: " << endl;
						cin >> lugar_destino;
				}
				
				cout << "Quilômetros a serem percorridos: " << quilometragem[lugar_origem][lugar_destino] << endl;
				quilometragem[lugar_origem][lugar_destino] = km;
				km_us.push_front(km);
				cout << "Valor da viagem: R$"  << valor_rota(lugar_origem,lugar_destino) << endl;  
				cout << "Motorista: ";
	  		
	  			
	  			preco_aux = valor_rota(lugar_origem, lugar_destino);
	  			
	  			it_modelo = motorista_modelo.begin();
				it_placa = motorista_placa.begin();
				it_cr_preco = motorista_cr_preco.begin();
				for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
					if(nome_moto_aux== *it_user){
				 		cout << *it_user << endl;
				 		cout << "Modelo = " << *it_modelo << endl;
				 		cout << "Placa: " << *it_placa << endl;
				 		
				 		preco_aux += *it_cr_preco;
				 		motorista_cr_preco.insert(it_cr_preco, preco_aux);
						
					} 
					it_modelo++;
					it_placa++;
					cont_pos++;
					it_cr_preco++;	
				}	
				
				
				
				string nome_user_aux;					//pra add o dinehro gasto do usuario
				cout << "Confirme nome de usuário : " << endl;
				cin >> nome_user_aux;
				it_cr_preco = usuario_cr_preco.begin();
				for(it_user= usuario_user.begin() ; it_user!= usuario_user.end() ; it_user++){
					if(nome_user_aux== *it_user){
						usuario_cr_preco.insert(it_cr_preco, preco_aux);
					}
					it_cr_preco++;
				}
				
				
				
				
				for(it_user= usuario_user.begin() ; it_user!= usuario_user.end() ; it_user++){
					if(nome_user_aux== *it_user){
						motorista_cr_preco.insert(it_cr_preco, preco_aux);
					}
					it_cr_preco++;
				}
			}
	

	  	cout << endl << endl;
	  	
	  	cout << "Confirmar viagem? (s/n)" << endl;
	  		cin >> op_viagem;


		if(op_viagem == 'S' || op_viagem == 's'){
			time(&t); //para mostrar dia e hora atual
			cout << "Viagem solicitada em : ";
			cout << ctime(&t) << endl << endl; 
			cout << "Seu motorista está indo até você! " << endl;
			
			cout << "Deseja enviar uma mensagem ao seu motorista? (s/n)" << endl;
				cin >> op_mensagem;
			cout << endl;
			
			if(op_mensagem == 'S' || op_mensagem == 's'){
				cout << "Digite a mensagem: " << endl;
					cin >> mensagem;
			}
			if(op_mensagem == 'N' || op_mensagem == 'n'){
				cout << "Continuando viagem... " << endl;
			}
			
			tempo();
        	cout << "Seu motorista chegou. Fique no lugar de encontro!" << endl << endl;
		}
		else {
			goto viagem;
		}
		
		cout << "Iniciar viagem! " << endl;
		tempo();
		
		cout << "Finalizar viagem!" << endl;
		cout << "Avalie seu motorista (1 a 5 estrelas): " << endl;
			cin >> estrelas;
		
		for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
			if(nome_moto_aux== *it_user){
				estrelas_moto.insert(estrelas);	//armazenei as estrelas correspondente a cada motorista numa arvore 	
			} 
		}
		
		while(estrelas <1 || estrelas>5){
			cout << "Opção não valida. Digite novamente:" << endl;
				cin >> estrelas;
			for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
				if(nome_moto_aux== *it_user){
					estrelas_moto.insert(estrelas);	 //armazenei as estrelas correspondente a cada motorista numa arvore 	
				} 
			}
		}
		cout << endl;
		cout << "Avaliação Motorista: " << estrelas << "estrelas " << endl; 
	}

	void corridas_realizadas_moto(){
		//vai pedir user e senha e vai ver as infos (se vai olhar na lista de motorista ou de cliente)
	int verifica=0;
	cout << "Confirme o seu user: ";
		cin >> user;
		
	cout << "Dinheiro já obtido com as viagens que já foram realizadas: "<< endl;

	it_user= motorista_user.begin();
	it_cr_preco = motorista_cr_preco.begin();
	
	while(verifica!=1){
		if(*it_user == user){
			cout << *it_user<< ", valor já arrecadado: R$" << *it_cr_preco << endl;
			verifica=1;
		}
		it_cr_preco++;	
	}
	
	}
	
	void corridas_realizadas_user(){
		int verifica=0;
		cout << "Confirme o seu user: ";
			cin >> user;
			
		cout << "Dinheiro já obtido com as viagens que já foram realizadas: "<< endl;
	
		it_user= usuario_user.begin();
		it_cr_preco = usuario_cr_preco.begin();
		
		while(verifica!=1){
			if(*it_user == user){
				cout << *it_user<< ", valor já arrecadado: R$" << *it_cr_preco << endl;
				verifica=1;
			}
			it_cr_preco++;	
		}
		
	}
	
	int verifica_moto(){
		int autoriza=0;
		char aswr;
		
		string user_aux;
		string senha_aux;
		
		inicio_verifica_moto:
			
		cout << "\n Digite seu login e senha para prosseguir: " << endl;
		
		cout << "User: " ;
		cin >> user_aux;
		
		cout << "Senha: ";
		cin >> senha_aux;
		
		for(it_user=motorista_user.begin(), it_senha = motorista_senha.begin() ; it_user != motorista_user.end(),it_senha != motorista_senha.end() ; it_user++,it_senha++){
			
			if(*it_user == user_aux){
				
				cout << "Usuario encontrado!" << endl;	
				
				if(*it_senha==senha_aux){
					cout << "Senha correta! "<< endl;
					autoriza=1;
				}
				if(*it_senha!=senha_aux){
					cout << "Senha incorreta!" << endl;
					//autoriza=0;
				}
			}	
		}	
		if (autoriza==0){
			cout << "Gostaria de tentar novamente? (s/n) " << endl;
			cin >> aswr;
				if(aswr=='s'){
					goto inicio_verifica_moto;
				}
		}
		return autoriza;
	}
	
	void meu_ranking(){

			cout << "Sua pontuação: " << endl;
	
			for(it_user= motorista_user.begin() ; it_user!= motorista_user.end() ; it_user++){
				for(it_estrelas = estrelas_moto.begin(); it_estrelas != estrelas_moto.end(); it_estrelas++){ //ordenando por meio da arvore 
				cout << *it_estrelas << "\t";
				}
			}
		cout << endl;	
	}
	
	void op_moto(){

	if(verifica_moto()==1){
		cout << "\nSelecione a opção desejada: "<< endl;
	
		cout << "1. Visualizar dinheiro já obtido. " << endl;
		cout << "2. Ver minha pontuação. "  << endl;
		cout << "3. Status do ranking. "<< endl;
		cout << "4. Sair do programa. " << endl;
				cin>> aux;
		
		system("cls");	
				
			while(aux<1 || aux>4){
				cout << "Opção inválida! Digite novamente: "<< endl;
				cin >> aux;
			}
			
		if(aux==1){
			corridas_realizadas_moto();
		}
		if(aux==2){
			meu_ranking();//funcao de pontuação   =---- só será criada após a criação da funcao da realização da corrida, pois o usuario que vai avaliar
		}
		if(aux==3){
			//funcao de status ranking
		}
		if(aux==4){
			exit(4);
		}
	}
	else{
		cout << "Acesso não autorizado! "<< endl ;
	}
		cout << endl;
		
	}		
	
	void ajuda(){
		int aux_ajuda;
		char util;
		int emergencia;
		string em1, em2, em3, em4, em5, em6, em7;
		string a1, a2;
		string op, opniao;
		
		while(aux_ajuda != 8){
		cout << "AJUDA OPC'car" << endl << endl;
		
		cout << "1- Como a OPC’cars funciona? " << endl;
		cout << "2- Como se cadastrar para ser usuário? " << endl;
		cout << "3- Como posso ser motorista da OPC’car ?" << endl;
		cout << "4- Como solicitar uma viagem " << endl;
		cout << "5- Após a viagem " << endl;
		cout << "6- Viagens com animais de estimação " << endl;
		cout << "7- Emergência " << endl;
		cout << "8- Reclamação/Sugestão " << endl << endl;
		cout << "Digite uma opção: " << endl;
			cin >> aux_ajuda;
		
		system("cls");	
		while(aux_ajuda<1 || aux_ajuda>8){
			cout << "Opção não disponivel" << endl;
			cin >> aux_ajuda;
		}
		
		switch(aux_ajuda){
			case 1:
			cout << "Como a OPC’cars funciona?" << endl << endl;
			cout << "Nas cidades onde o OPC opera, você pode solicitar uma viagem e até realizar paradas antes de seu destino final. " << endl;
			cout << "Com uma inovação, mostrar ao usuário caso queira sua rota, trânsito e tempo esperado! " << endl;
			cout << "Solicite sua viagem, o aplicativo te informará o nome do motorista, modelo e placa do carro corresponde, além da quilometragem " << endl;
			cout << "que irá rodar e o valor correspondente. " << endl;
			cout << "Ao final não esqueça de avaliar seu motorista. Assim garantiremos um alto padrão de viagens e experiências para nossos usuários! " << endl << endl;

			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;	
			
			system("pause");
			system("cls");
				break;
				
			case 2:
			cout << "Como se cadastrar para ser usuário? " << endl << endl;	

			cout << "É necessário apenas seu nome. E em seguida crie um user e senha para acessar ao nosso aplicativo." << endl << endl;
			
			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;	
				
			system("pause");
			system("cls");	
				break;
				
			case 3:
			cout << "Como posso ser motorista da OPC’car ?" << endl << endl;

			cout << "Qualquer pessoa pode se cadastrar! Claro, tendo habilitação e vencimento em dia, sem multas ou débitos!"  << endl;
			cout << "Para se cadastrar, insira seu nome, número de telefone, e-mail para contato."  << endl; 
			cout << "É necessário também as informações de seu carro como modelo, ano, motor, capacidade de bagageiro,"  << endl;
			cout << "e assim selecionaremos em qual tipo seu carro se encontra dentro de nossos serviços. " << endl << endl;
			
			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;	
				
			system("pause");
			system("cls");
				break;
				
			case 4:
			cout << "Como solicitar uma viagem " << endl << endl;
			
			cout << "Há duas opções para o usuário:" << endl;
			cout << "1°- Acessar em seu menu a rota na qual deseja realizar e assim ver o tempo e trânsito provável no local " << endl; 
 
			cout << "2°- Realizar viagem imediatamente " << endl << endl;

			cout << "Para as duas opções siga estes passos: " << endl << endl;

			cout << "1°: Informe se deseja realizar uma parada antes de seu destino final" << endl;
			cout << "2°: Insira seu local de partida e destino final. Caso tenha escolhido realizar parada, insira também seu local de parada " << endl;
			cout << "3°: Confirme sua viagem " << endl;
			cout << "4°: Aguarda seu motorista no local de partida e boa viagem! " << endl << endl;

			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;
				
			system("pause");
			system("cls");	
				break;
				
			case 5:
			cout << "Após a viagem " << endl << endl;
			
			cout << "Lembre-se de após a viagem concluída de avaliar seu motorista com estrelas (entre 1 a 5)! " << endl;
			cout << "Isto é importante para que possamos sempre atende-los da melhor forma. " << endl << endl;
			
			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;	 	
				break;
				
			case 6:
			cout << "Viagens com animais de estimação " << endl << endl;
			
			cout << "De acordo com leis locais e federais, animais de serviço podem acompanhar seus donos em qualquer viagem. " << endl;
			cout << "Se você deseja viajar com um animação de estimação que não seja animal de serviço, entre em contato com seu motorista. " << endl;
			cout << "Por favor, ajude seu motorista a manter veículos limpos para os demais passageiros, trazendo um cobertor ou caixa de " << endl;
			cout << "transporte para reduzir possíveis danos de sujeira." << endl << endl;
			
			cout << "Isto foi útil para você? :) (s/n)" << endl;
				cin >>util;
				
			system("pause");
			system("cls");	
				break;
				
			case 7:
			cout << "Emergência " << endl << endl;
			cout << "1- Reportar roubo" << endl;
			cout << "2- Assedio " << endl;
				cin >> emergencia;
			
			cout << endl;	
			if(emergencia == 1){
				cout << "Alguém precisa de atenção médica?" << endl; 
					cin >> em1;
				cout << "Alguma arma foi utilizada ? " << endl;
					cin >> em2;
				cout << "Quem tentou ou realizou o roubo? " << endl;
					cin >> em3;
				cout << "Quais pertences foram roubados? " << endl;
					cin >> em4;
				cout << "Digite seu número de telefone:" << endl;
					cin >> em5;
				cout << "Digite a cidade onde se encontra: " << endl;
					cin >> em6;
				cout << "Mais detalhes do ocorrido: " << endl;
					cin >> em7;
					
				cout << endl << endl;

				cout << "Suas informações foram mandadas para a delegacia de polícia mais próxima de sua cidade. Aguarde uns instantes que entraremos em contato." << endl; 
			}
			if(emergencia == 2){
				cout << "Você precisa de atenção médica?  " << endl;
					cin >> a1;
				cout << "Digite detalhes do ocorrido:  " << endl;
					cin >> a2;

				cout << endl << endl;
				cout << "Lamentamos o ocorrido. Dados os fatos e provas o OPC não deixará impune o responsavel " << endl;
				cout << "Suas informações foram mandadas para a delegacia de polícia mais próxima de sua cidade. Aguarde uns instantes que entraremos em contato. " << endl; 
			}
			
			system("pause");
			system("cls");
				break;
				
			case 8:
			cout << "Reclamação/Sugestão " << endl;
			
			cout << "Sua opinião é importante para nós!" << endl;
			cout << "Como você classifica nosso aplicativo?" << endl;
			cout << "Ótimo - bom - ruim" << endl;
				cin >> op;
			cout << endl;
			cout << "Deseja realizar um comentário sobre o nosso aplicativo?" << endl;
				cin >> opniao;
			cout << endl;
			
			system("pause");
			system("cls");	
				break;
		}	
	}	
	}
};

int main(){
	
	opc la;
	
	setlocale(LC_ALL,"Portuguese");
	inicio_main:
	
	while(aux != 3){
	
	cout << "\t OP'c OPEN CAR " << endl<< endl;
	cout << "Quem é você? " << endl;
	cout << "1- Motorista" << endl;
	cout << "2- Usuário" << endl << endl;
	cout << "3- Ajuda- SAC" << endl;
		cin >> aux;
	
	
	system("cls");	
		while(aux<1 || aux>3){
			cout << "Opção inválida! Digite novamente: "<< endl;
			cin >> aux;
		}
		
	switch(aux){
		case 1:
			la.menu();
			
			break;
		case 2:
			la.menu();
			
			break;
		case 3:
			la.ajuda();
			break;
	}
	}

	return 0;
}

		
