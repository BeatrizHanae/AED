//Adrielle Custodio - 180096699
//Questao 2 !!! semm tempo para mtss comentarios
//codigo de verificacao para gferente : 1024
#include<iostream>
#include<list>
#include<string.h>
using namespace std;

class mercado{		//classe
	public:
	char aswr;
	int val, codigo, aswr1, autoriza;
	
	list<int> arroz;			//criando as listas todas
	list<int>:: iterator it_arroz;
	list<int> feijao;
	list<int>:: iterator it_feijao;
	list<int> macarrao;
	list<int>::iterator it_macarrao;
	
	list<int> refrigerante;
	//list<string>::iterator it_refrigerante;
	list<int>suco;
	//list<string>::
	list<int> cerveja;
	
	list<int>batata;
	list<int>sorvetes;
	list<int>carnes;
	
	list <int>:: iterator it1;
	list <int>:: iterator it1_v;
	list<int>:: iterator it2;
	list<int>:: iterator it2_v;
	list<int>:: iterator it3;
	list<int>:: iterator it3_v;
	
	void verifica(){		
	 autoriza=0;  //vai funcionar como booleana
		cout << " Para fazer essa operacao vc precisa ter acesso autorizado! Qual o codigo? " << endl;
		cin >> codigo;
		
		if(codigo==1024){
			cout << "Autorizado!" << endl;
			autoriza=1;
		}
		else{
			cout << "acesso negado";
		}
		
		
	}
		void inserir(){   //void pro gerente inserir
			
			aswr=0;
			val=0;
			if (autoriza==1){
			cout << "\n Insira o tipo de alimento q voce vai inserir: "<< endl;
			cout << "A. Alimentos \n B. Bebidas. \n C. Congelados " << endl;
			cin >> aswr;
			
			if(aswr== 'a'| aswr=='A'){  	//Caso a opçao escolhida seja alimentos
				cout <<"Qual alimento sera adicionado no estoque? " << endl;
				cout << "1.Arroz \n 2.Feijao. \n 3. Macarrao" << endl;
				cin >> aswr1;
				
				if(aswr1==1){
					cout << "+1 Arroz selecionado! Qual a data de validada? (dia) " << endl;
					cin >> val;
					arroz.push_front(val);  
					
				}
				if(aswr==2){
					cout << "+1 Feijao selecionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					feijao.push_front(val);
				}
				if(aswr==3){
					cout << "+1 Feijao selecionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					macarrao.push_front(val);	
					
				}
				 
			}
			
			if(aswr=='b' || aswr== 'B'){
				
				cout <<"Qual alimento sera adicionado no estoque? " << endl;
				cout << "1.Refrigerante \n 2.Suco.. \n 3. Cerveja" << endl;
				cin >> aswr1;
				
				if(aswr1==1){
					cout << "+1 Refrigetante adicionado! Qual a data de validada? (dia) " << endl;
					cin >> val;
					refrigerante.push_front(val);  
					
				}
				if(aswr==2){
					cout << "+1 Suco adicionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					suco.push_front(val);
				}
				if(aswr==3){
					cout << "+1 Cerveja selecionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					cerveja.push_front(val);	
					
				}
			}
			
			if(aswr=='c' || aswr=='S'){
				
				cout <<"Qual alimento sera adicionado no estoque? " << endl;
				cout << "1.Batata \n 2.Sorvete.. \n 3. Carne" << endl;
				cin >> aswr1;
				
				if(aswr1==1){
					cout << "+1 Batata adicionado! Qual a data de validada? (dia) " << endl;
					cin >> val;
					refrigerante.push_front(val);  
					
				}
				if(aswr==2){
					cout << "+1 Sorvete adicionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					suco.push_front(val);
				}
				if(aswr==3){
					cout << "+1 Carne selecionado! Qual a data de validade? (dia)" << endl;
					cin >> val;
					cerveja.push_front(val);	
					
				}
				
				
				
				
			}
		}
				
				
				
				
				
				
			}
			
			void mostrar(){
				int i=1,j=1,k=1;
				cout << "Alimentos::" << endl;
			
				
				for(it1=arroz.begin(); it1!= arroz.end(); it1++){
					cout << "Arroz " << i << " Vencimento: " << *it1 << "/10";
					i++;
					cout << endl;
				}
				
				for(it2=feijao.begin(); it2!= feijao.end(); it2++){
					cout << "Feijao " << j << " Vencimento: " << *it2<< "/10";
					j++;
					cout << endl;
				}
				for(it3=macarrao.begin(); it3!= macarrao.end(); it3++){
					cout << "Feijao " << k << " Vencimento: " << *it3<< "/10";
					k++;
					cout << endl;
				}
				
				cout << "\nBEBIDAS: " << endl;
				i=1;
				j=1;
				k=1;
				
				for(it1=refrigerante.begin(); it1!= refrigerante.end(); it1++){
					cout << "Refrigerante " << i << "Vencimento: " << *it1;
					i++;
					cout << endl;
				}
				for(it2=suco.begin(); it2!= suco.end(); it2++){
					cout << "Suco " << j << "Vencimento: " << *it2;
					j++;
					cout << endl;
				}
				for(it3=cerveja.begin(); it3!= cerveja.end(); it3++){
					cout << "Cerveja " << k << "Vencimento: " << *it3;
					k++;
					cout << endl;
				}
				
				cout << "\n CONGELADOS: " << endl;
				i=1;
				j=1;
				k=1;
				
				for(it1=batata.begin(); it1!= batata.end(); it1++){
					cout << "Batata " << i << "Vencimento: " << *it1;
					i++;
					cout << endl;
				}
				for(it2=sorvetes.begin(); it2!= sorvetes.end(); it2++){
					cout << "Sorvetes " << j << "Vencimento: " << *it2;
					j++;
					cout << endl;
				}
				for(it3=carnes.begin(); it3!= carnes.end(); it3++){
					cout << "Carne " << k << "Vencimento: " << *it3;
					k++;
					cout << endl;
				}
				
				
			}
	
	void procurar(){
		int produto;
		int achou=0;
		cout << "Qual o nome do produto que voce esta procurando? " << endl;
		cout << "1.Arroz \n 2.feijao \n 3.macarrao \n 4. refrigerante \n 5.suco \n 6. cerveja \n 7.batata\n 8.sorvete \n 9. carne" << endl;
		cin >> produto;
		
		if(produto==1 && arroz.size() !=0)
			achou=1;
		if(produto==2 && feijao.size()!= 0)
			achou=1;
		if(produto==3 && macarrao.size() !=0)
			achou=1;
		if(produto==4 && refrigerante.size()!= 0)
			achou=1;
		if(produto==5 && suco.size() !=0)
			achou=1;
		if(produto==6 && cerveja.size()!= 0)
			achou=1;
		if(produto==7 && batata.size() !=0)
			achou=1;
		if(produto==8 && sorvetes.size()!= 0)
			achou=1;	
		if(produto==9 && carnes.size()!= 0)
			achou=1;	
		
		
		if(achou==1){
			cout << "ELEMENTO ENCONTRADO" << endl;
		}
		else{
			cout << "ELEMENTO NAO ENCONTRADO "<< endl;
		}
	}
	
	
};

int main(){
	mercado drikas;
	
	int aux;
	
	while(aux!=5){
		aux=0;
	cout << "\nMENU DO SUPERMECADO" << endl;
	cout << "1. Inserir elementos " << endl;
	cout << "2. Imprimir elementos " << endl;
	cout << "3. Verificar estoque " << endl;
	cout << "4. Procurar produto " << endl;
	cout << "5. Sair" <<endl;
	
	cin >> aux;
	system("cls");
	switch(aux){
		case 1:
			drikas.verifica();
			drikas.inserir();
			break;
		case 2:
			drikas.mostrar();
			break;
		case 3:
			drikas.mostrar();
			break;
		case 4:
			drikas.procurar();
		break;	
			
		
		
		
		
		
	}
}
	
	
	return 0;
	
}
