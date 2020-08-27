/*herança com as bolsas filhas.*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class bolsa{
	//atributos
	string marca;
	string material;
	string cor;
	float peso;
	
	//metodos publicos (serao herdados)
	public:
		//get e set marca
		void set_marca (string x){
			marca=x;
		}
		string get_marca(){
			return marca;
		}
		
		//get e set material
		void set_material (string y){
			material=y;
		}
		string get_material(){
			return material;
		}
		
		//get e set cor
		void set_cor (string w){
			cor=w;
		}
		string get_cor(){
			return cor;
		}
		
		//get e set peso
		void set_peso (float z){
			peso=z;
		}
		float get_peso(){
			return peso;
		}
};

//classe mala tá herdando atributos/metodos da classe bolsa
class mala : public bolsa{
	//atributos proprios
	float altura, largura, profundidade;
	
	public:
		//get e set altura
		void set_altura (float a){
			altura=a;
		}
		float get_altura(){
			return altura;
		}
		
		//get e set largura
		void set_largura (float l){
			largura=l;
		}
		float get_largura(){
			return largura;
		}
		
		//get e set profundidade
		void set_profundidade (float p){
			profundidade=p;
		}
		float get_profundidade(){
			return profundidade;
		}
};

//ultima classe, herda atributos de bolsa e mala
class mochila : public mala{
	//atributos proprios
	int bolsos;
	
	public:
		//get e set bolsos
		void set_bolsos (int b){
			bolsos=b;
		}
		int get_bolsos(){
			return bolsos;
		}
};

int main(){
	//instanciando as classes
	bolsa c1;
	mala c2;
	mochila c3;
	
	int opcao;
	
	fstream heranca;
	string marca, material, cor, s, tipo;
	float peso, altura, largura, profundidade;
	int bolsos;
	
	while(3){
		//menu simples
		cout << "1 - Verificar produtos listados" << endl;
		cout << "2 - Listar novo produto" << endl;
		cout << "3 - Sair" << endl;
		
		cin >> opcao;
		
		switch(opcao){
			case 1:{
				//heranca eh o nome do .txt
				heranca.open("heranca.txt", ios::in | ios::app);
				while (getline(heranca, s)){
					cout << s << "\n";
				}
				heranca.close();
				break;
			}
			
			case 2:{
				
				cout << "Digite o tipo de produto (bolsa, mala ou mochila): " << endl;
				cin >> tipo;
				
				if(tipo == "bolsa"){
					heranca.open("heranca.txt", ios::out | ios::app);
	
					cout << "Marca: " << endl;
					cin >> marca;
					cout << "Material: " << endl;
					cin >> material;
					cout << "Cor: " << endl;
					cin >> cor;
					cout << "Peso(g): " << endl;
					cin >> peso;
	
					c1.set_marca(marca);
					c1.set_material(material);
					c1.set_cor(cor);
					c1.set_peso(peso);
	
					heranca << "BOLSA" << "\n" << marca << "\n" << material << "\n" 
					<< cor << "\n" << peso << "\n" << endl;
	
					heranca.close();
	
					cout << "Dados do produto cadastrado:" << endl;
	
					cout << c1.get_marca() << endl;
					cout << c1.get_material() << endl;
					cout << c1.get_cor() << endl;
					cout << c1.get_peso() << endl;
				}
				if(tipo == "mala"){
					heranca.open("heranca.txt", ios::out | ios::app);
	
					cout << "Marca: " << endl;
					cin >> marca;
					cout << "Material: " << endl;
					cin >> material;
					cout << "Cor: " << endl;
					cin >> cor;
					cout << "Peso(g): " << endl;
					cin >> peso;
					cout << "Altura(cm): " << endl;
					cin >> altura;
					cout << "Largura(cm): " << endl;
					cin >> largura;
					cout << "Profundidade(cm): " << endl;
					cin >> profundidade;
	
					c2.set_marca(marca);
					c2.set_material(material);
					c2.set_cor(cor);
					c2.set_peso(peso);
					c2.set_altura(altura);
					c2.set_largura(largura);
					c2.set_profundidade(profundidade);
	
					heranca << "MALA" << "\n" << marca << "\n" << material << "\n" 
					<< cor << "\n" << peso << "\n" 
					<< altura << "\n" << largura << "\n" 
					<< profundidade << "\n" << endl;
	
					heranca.close();
	
					cout << "Dados do produto cadastrado:" << endl;
	
					cout << c2.get_marca() << endl;
					cout << c2.get_material() << endl;
					cout << c2.get_cor() << endl;
					cout << c2.get_peso() << endl;
					cout << c2.get_altura() << endl;
					cout << c2.get_largura() << endl;
					cout << c2.get_profundidade() << endl;
				}
				if(tipo == "mochila"){
					heranca.open("heranca.txt", ios::out | ios::app);
	
					cout << "Marca: " << endl;
					cin >> marca;
					cout << "Material: " << endl;
					cin >> material;
					cout << "Cor: " << endl;
					cin >> cor;
					cout << "Peso(g): " << endl;
					cin >> peso;
					cout << "Altura(cm): " << endl;
					cin >> altura;
					cout << "Largura(cm): " << endl;
					cin >> largura;
					cout << "Profundidade(cm): " << endl;
					cin >> profundidade;
					cout << "Numero de bolsos: " << endl;
					cin >> bolsos;
	
					c3.set_marca(marca);
					c3.set_material(material);
					c3.set_cor(cor);
					c3.set_peso(peso);
					c3.set_altura(altura);
					c3.set_largura(largura);
					c3.set_profundidade(profundidade);
					c3.set_bolsos(bolsos);
	
					heranca << "MOCHILA" << "\n" << marca << "\n" << material << "\n" 
					<< cor << "\n" << peso << "\n" 
					<< altura << "\n" << largura << "\n" 
					<< profundidade << "\n" << bolsos << "\n" << endl;
	
					heranca.close();
	
					cout << "Dados do produto cadastrado:" << endl;
	
					cout << c3.get_marca() << endl;
					cout << c3.get_material() << endl;
					cout << c3.get_cor() << endl;
					cout << c3.get_peso() << endl;
					cout << c3.get_altura() << endl;
					cout << c3.get_largura() << endl;
					cout << c3.get_profundidade() << endl;
					cout << c3.get_bolsos() << endl;
				}
				if(tipo != "bolsa" && tipo != "mochila" && tipo != "mala"){
					cout << "Nao foi possivel identificar a opcao.";
					return 0;
				}
				break;
			}
			case 3:{
				exit(3);
				break;
			}
		}
	}
	
	return 0;
}
