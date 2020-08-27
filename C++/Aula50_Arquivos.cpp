#include <iostream>
#include <fstream> //biblioteca de arquivos
#include <cstdlib> //biblioteca do cls

using namespace std;

int main(){
	
//	//ofstream - saida da informação estará saindo do sistema e entrando no arquivo;
//	//ifstream - entrada da informação que estava no arquivo no sistema;
//	//fstream - entrada e saida , posso abrir o arquivo e usar livremente nos dois modos.
//	
//	//para Escrever um arquivo:
//	ofstream arquivoSaida; //meu objeto do tipo ofstream.
//	//ainda não existe o arquivo, logo vou criar:
//	arquivoSaida.open("Curso50.txt"); //.open me permite criar o arquivo.
//	//arquivo.open("Curso50.txt", ios::app) // na abertura do arquivo, ele posiciona o cursor no final do arquivo, o que permite que seja adicionada uma nova informação no final do arquivo sem substituir o texto anterior.
//	//para ARMAZENAR alguma informação no arquivo:
//	arquivoSaida << "Oi"; //escreve no arquivo;
//	
//	//para LER um arquivo: 
//	
//	arquivoSaida.close(); //fecha o arquivo para nao ficar na memoria do projeto.
//	
//	ifstream arquivoEntrada; //meu objeto do tipo ifstream;
//	string linha; // variável para armazenar a linha lida do arquivo.
//	 
//		//abrir o arquivo:	
//	arquivoEntrada.open("Curso50.txt");
//	
//	if (arquivoEntrada.is_open()){ 	//verifica se o arquivo realmente foi aberto. Se sim, ele procede com as intruções dentro desse if.
//		while(getline(arquivoEntrada,linha){ //Um looping para ler linha por linha do arquivo, como parâmetro do getline(objeto e a variável da linha).
//		 cout << linha << endl; //apresenta as linhas no arquivo.
//	}else{ //caso ele nao consiga abrir o arquivo.
//		cout << "Nao foi possivel abrir o arquivo!" << endl;
//	}
	 
	//para ESCREVER e LER no arquivo;
	
	fstream arquivoES;
	char opc = 's'; //essa variável char para quando o programa perguntar se quer digitar um novo nome;
	string nome, linha;
	
	arquivoES.open("Texto2.txt", ios::out); //criando o arquivo; ios::out permite que ESCREVA no terminal a palavra q deseja gravar no TXT.
	
	//O que me permite escrever no arquivo:
	while (opc=='s' or opc == 'S'){
		cout << "Digite um nome: ";
		cin >> nome;
		arquivoES << nome << "\n";
		cout << "\nDigitar um novo nome?[s/n]";
		cin >> opc;
		system("CLS");
	}
	
	arquivoES.close();
	
	arquivoES.open("Texto2.txt", ios::in); //abrir o arquivo para o programa LER
	
	cout << "Nomes digitados" << endl;
	
	//leitura de cada linha do TXT
	if (arquivoES.is_open()){
		while (getline(arquivoES,linha)){
			cout << linha << endl;
		}
	}else{
		cout << "Nao foi possivel abrir o arquivo" << endl;
	}
	
	return 0;
	
}
