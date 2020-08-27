//Beatriz Hanae Fujimoto -160113814

#include<iostream>
#include <stack>
#include <sstream>

using namespace std;

class objeto{
public:

	ofstream escreve;
	ifstream le;
	
	stack <int> pilha;
	
	void Adiciona_pilha(){
		int v;
		
		for(int i=0; i<5; i++){ 
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
		
		escreve.open("cofre.txt", ios::app); 
		if(! escreve.is_open()){
			cout<<"Erro ao abrir cofre."<<endl;
		}
		
		while(!pilha.empty()){ 
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
			aux = texto; 									
		
			stringstream geek (aux); 						
			geek >> num;
						
			soma += num;	
		}
		le.close();
		soma = ( soma - num);								
		
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

		while( quant > 0){ 										
			
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
	
		le.open("cofre.txt");									
		
		if(! le.is_open()){
			cout<<"Erro ao abrir o arquivo."<<endl;
		}
		
		while( !le.eof() ){ 
			getline(le,texto);
			p.push(texto);
		}
		le.close();
		
		texto.clear();
		guarda.clear();
		
		while(!p.empty()){				
			if(p.top() == "50" && cinq == 0){ 					
				guarda +=  p.top();
				guarda += '\n';	
			}
			if(p.top() == "50" && cinq != 0){					
				cinq--;
			}
			
			if(p.top() == "10" && dez == 0){
				guarda +=  p.top();
				guarda += '\n';
			}
			if(p.top() == "10" && dez != 0){
				dez--;
			}
			
			if(p.top() == "5" && cinco == 0){
				guarda += p.top();
				guarda += '\n';
			}
			if(p.top() == "5" && cinco != 0){
				cinco--;
			}
			
			
			p.pop();
		}
		
	
		
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
			case 1:{
				x.Adiciona_pilha();
				break;
			}
			case 2:{
				x.le_arquivo();
				break;
			}
			case 3:{ 
				cout<<"Valor total presente no cofre: "<<x.soma()<<endl;
	
				system("pause");
				system("cls");
				
				break;
			}
			case 4:{ 
				x.Retirar_dinheiro();
				break;
			}
		}
	}



return 0;
}
