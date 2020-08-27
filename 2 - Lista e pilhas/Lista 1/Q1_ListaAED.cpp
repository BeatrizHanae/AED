#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

class Jogador{
	string nomeJogador;
	vector <int> quilometro;
	
	public:
		Jogador(){} //construtor;
		
		void setNome(string nome){
			nomeJogador = nome;
		}
		
		void setQuilometro(int km){
			quilometro.push_back(km);			
		}
		
		string getNomeJogador(){
			return nomeJogador;
		}
		
		vector<int> getKm (){
			return quilometro; 
		}
		
};

//Jogador MaiorCorredor(vector <Jogador> jogador){ //função Jogador;
//	vector <Jogador> maiorPercurso; //
//	for (int i=0; i<jogador.end()-1;i++){
//		vector <int> jogador[i].getKm();
//		string jogador[i].getNomeJogador();
//		if (jogador[i].){
//		}
//	} 
//	
//}

int main (){
		vector <Jogador> jogadores;
		string nomeJogador, nomeJogadorAux,linha;
		float metros;
		int opcao, jogo;
		fstream arquivo;
	
		cout << "Quantos jogos voce gostaria de incluir?" << endl;
		cin >> jogo;
		
		while(true){
			
			cout << "1- Incluir jogardores e distâncias nos jogos." << endl;
			cout << "2- Ler o arquivo com os jogadores e as distâncias percorridas." << endl;
			cout << "3- Jogador que percorreu a maior distância nos jogos. "<< endl;
			
			cin >> opcao;
				switch (opcao){
					case 1: {
						arquivo.open("Jogadores.txt", ios::out);
						for (int i=0; i<2;i++){
							cout << "Nome do jogador" << endl;
							cin >> nomeJogador;
							arquivo << endl << nomeJogador << endl; //endl na frente porque ele estava concatenando o "Fim" e o nome do jogador;
							for (int j=0; j<jogo; j++){
								cout << "Jogo" << j+1 << ": ";
								cin >> metros;
								arquivo << metros << "\n";
							}
						arquivo << "Fim";
						}
						arquivo.close();
						break;
					}
					case 2:{
						arquivo.open("Jogadores.txt", ios::in);
						cout << "Jogadores com as distancias percorridas em cada jogo: " << endl;
						
						if (arquivo.is_open()){
							while (!arquivo.eof()){ //end of file -> ultima linha do arquivo.
							
							 getline(arquivo,nomeJogadorAux);
							 cout << "Nome do Jogador: " << nomeJogadorAux << endl;
							 string jogo = "seila";
							 int i = 0;
							 
							while(1){
							 	getline(arquivo,jogo);
							 	if(jogo == "Fim" ){
							 		break;
								 }
							 	cout << "Jogo " << ++i << ": " << jogo <<endl;
							 }
							}
						} else {
							cout << "Nao foi possivel abrir o arquivo" << endl;
						}
						arquivo.close();
						break;
					}
					case 3: {						
//						arquivo.open("Jogadores.txt", ios::in);
//						cout << "O jogador que mais percorreu maior distância foi:" << endl;
//						if (arquivo.is_open()){
//							while (!arquivo.eof()){
//								string jogadorNomeAux;
//								string correuMetrosAux; //arquivo é tudo string;
//								Jogador jogador; //criando o objeto jogador;
//								
//								getline(arquivo, jogadorNomeAux) //pegando o nome do jogador;
//									jogador.setNome(jogadorNomeAux);
//								while(1){
//									getline(arquivo,correuMetrosAux);
//									jogador.setQuilometros(correuMetrosAux); 
//									if (correuMetrosAux == "Fim"){
//										break;
//									}
//								}
//							}
//							
//						}
//						break;
//					}
				}
		}
 }
	return 0;
	}
	

