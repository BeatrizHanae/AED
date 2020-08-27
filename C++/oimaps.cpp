#include <iostream>
#include <string>
#include <algorithm>
#include<windows.h>

using namespace std;

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
		string partida = lugar_partida;
		replace(partida.begin(), partida.end(), ' ', '+');
		cout << " AGORA escolha a cidade de DESTINO (): " << endl;
		cin >> lugar_final;
		string final = lugar_final;
		replace(final.begin(), final.end(), ' ', '+');
		
		string open_url = "https://www.google.com.br/maps/dir/";
   		string q = open_url+partida+final;
   
   		ShellExecute (0, "open", q.c_str(), NULL , NULL, 1);
   		
   		cout << "Deseja voltar para o menu? (Sim ou Nao)" << endl;
   		//cin >> resp;
   	/*	if (resp == "Sim"){
   		//	op_us(); 
   		break;
		   }
		else if (resp == "Nao"){
			//corrida();
		}
		else {
			cout << "Opção inválida, tente novamente" << endl;
			google_maps();
		}	
	}*/
}
	int main (){
		google_maps();
		return 0;
	}
