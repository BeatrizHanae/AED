#include<iostream>
#include<fstream>
#include<string.h>
#include<stack> //biblioteca pilha;
#include<sstream> // transforma string em int;
using namespace std;

class objeto{
public:

	ofstream escreve;
	ifstream le;
	
	stack <int> pilha;
	
	void Adiciona_pilha(){
		//cada pilha guarda 5 cédulas de dinheiro;
		// guarda apenas cédular de R$05.00 R$10.00 R$50.00;
		int v;
		
		for(int i=0; i<5; i++){ //atribui os valores a pilha.
			cout<<"Valor da cédula "<<i+1<<" : ";
			cin>>v;
			if(v != 5 && v != 10 && v != 50){
				cout<<"Valor não permitido na pilha, adicione nova cédula :"<<endl;
				i--;
			}
			else {
				pilha.push(v);
			}
			cout<<endl;
		}
		
		escreve.open("cofre.txt", ios::app); // use o ios app, para que quando adicionar uma pilha nova, ela não substitua a que já está presente no arquivo;
		if(! escreve.is_open()){
			cout<<"Erro ao abrir cofre."<<endl;
		}
		
		while(!pilha.empty()){ //passa a pilha para o arquivo.
			escreve<<pilha.top();
			escreve<<endl;
			pilha.pop();
		}
		
		escreve.close();
		
		system("pause");
		system("cls");
	}
	
	void le_arquivo(){
		string texto;
		int cinco = 0, dez = 0, cinq = 0;
		le.open("cofre.txt");
		if(! le.is_open()){
			cout<<"Erro ao ler arquivo."<<endl;
		}
		
		while(! le.eof()){
			getline(le,texto);
			
			if(texto == "5"){
				cinco++;
			}
			if(texto == "10"){
				dez++;
			}
			if(texto == "50"){
				cinq++;
			}
		}
		cout<<"Notas de 5: "<<cinco<<endl
			<<"Notas de 10: "<<dez<<endl
			<<"Notas de 50: "<<cinq<<endl<<endl;
			
		le.close();
			
		system("pause");
		system("cls");			
	}
	
	int soma(){
		string texto, aux;
		int num = 0, soma = 0, cont = 0;
		
		le.open("cofre.txt");
		if(! le.is_open()){
			cout<<"Erro ao ler arquivo."<<endl;
		}
		aux.clear();
		
		while(! le.eof()){
			cont--;
			getline(le, texto);
			aux = texto; 									// aux recebe uma linha do texto;
		
			stringstream geek (aux); 						// transforma para string;
			geek >> num;
						
			soma += num;	
		}
		le.close();
		soma = ( soma - num);								//subtrai o ultimo valor de num, que por algum motivo que eu n faço ideia, é somado 2 vezes;
		
		return soma;
	}
	
	void Retirar_dinheiro(){
		int valor = 0, cinco = 0, dez = 0, cinq = 0;
		int quant;
		string texto, guarda;
		stack <string> p;
		
		inicio:
		cout<<"Qual quantia deseja retirar: ";
		cin>>quant;
		
		if(quant > soma()){
			cout<<"Quantia excede o valor encontrado no cofre."<<endl
				<<"Digite novo valor.\n"<<endl;
			goto inicio;
		}
		
		if(quant % 5 != 0){
			cout<<"Não há variedade de notas suficiente para sacar o valor desejado."<<endl
				<<"Digite novo valor.\n"<<endl;
			goto inicio;
		}

		while( quant > 0){ 										// diz quais as cédulas que serão detiradas co cofre;
			
			if( quant >= 50){
				cinq++;
				quant = (quant - 50);
			}
			if( quant < 50 && quant >= 10){
				dez++;
				quant =( quant - 10);
			}
			if( quant < 10 && quant >= 5){
				cinco++;
				quant = ( quant - 5 );
			}
		}
		
		cout<<"Você pode sacar: "<<endl<<cinq<<" : notas de R$50.00."<<endl
				<<dez<<" : notas de R$10.00."<<endl
				<<cinco<<" : notas de R$5.00."<<endl;
		system("pause");
	
		le.open("cofre.txt");									 // ve quais são as cédulas presentes no cofre, e as transfere para uma pilha;
		
		if(! le.is_open()){
			cout<<"Erro ao abrir o arquivo."<<endl;
		}
		
		while( !le.eof() ){ 
			getline(le,texto);
			p.push(texto);
		}
		le.clear(); // deixa o arquivo em branco;
		le.close();
		
		texto.clear();
		guarda.clear();
		
		while(!p.empty()){										 // retira as notas que serão sacadas da pilha;
			//a variável guarda recebe os valores que seão passados novamente para o arquivo;
			//para R$ 50
			if(p.top() == "50" && cinq == 0){ 					// quando o contador da nota está zerado, o valor é guardado.
				guarda +=  p.top();
				guarda += '\n';	
			}
			if(p.top() == "50" && cinq != 0){					 // quando o contador != 0, subtraio um;
				cinq--;
			}
			
			//para R$ 10
			if(p.top() == "10" && dez == 0){
				guarda +=  p.top();
				guarda += '\n';
			}
			if(p.top() == "10" && dez != 0){
				dez--;
			}
			
			//para R$ 5
			if(p.top() == "5" && cinco == 0){
				guarda += p.top();
				guarda += '\n';
			}
			if(p.top() == "5" && cinco != 0){
				cinco--;
			}
			
			
			p.pop();
		}
		
		//cout<<"guarda: "<<guarda<<endl;
		
		escreve.open("cofre.txt");
		if(! escreve.is_open()){
			cout<<"Erro ao abrir o arquivo."<<endl;
		}
		
		escreve<<guarda;
		
		escreve.close();
		
		cout<<endl<<"SAQUE REALIZADO COM SUCESSO !"<<endl;
		system("pause");
		system("cls");
	}

}; 

int main(void){
setlocale(LC_ALL,"Portuguese");
	int menu = 0;
	objeto x;

	while(menu != 5){
		
		cout<<"1) Adicionar pilha."<<endl
			<<"2) Exibir quantidade de cada nota."<<endl
			<<"3) Soma total"<<endl
			<<"4) Retirar dinheiro."<<endl
			<<"5) Finalizar operações."<<endl;
		cin>>menu;
	
		switch (menu){
			case 1:{ // adicionar pilha;
				x.Adiciona_pilha();
				break;
			}
			case 2:{ //mostra a quantidade de cada nota;
				x.le_arquivo();
				break;
			}
			case 3:{ // exibi valor total;
				cout<<"Valor total presente no cofre: "<<x.soma()<<endl;
	
				system("pause");
				system("cls");
				
				break;
			}
			case 4:{ // retirar dinheiro.
				x.Retirar_dinheiro();
				break;
			}
		}
	}



return 0;
}
