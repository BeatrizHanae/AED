//desafio 3
//Notas de uma escola 
//Adrielle - 18/0096699
//Beatriz - 16/0113814
//Letícia - 18/0104896

#include<iostream>
#include<locale.h>
#include<set>
#include<list>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

class escola{
	public:
		
	set<int>arvore; //estrutura de arvore
	
	list<int>notas1; //lista para manipular arquivo
	list<int>::iterator it;
	
	ofstream escreve; //para escrita em arquivo
	ifstream le; //para leitura do arquivo 
	
	int notas[100]; 
	int n;
	int num;
		
		void inserir(){  //FUNÇÃO PARA INSERIR NOTAS 	
			cout << "Quantas notas serão inseridas? " << endl;
				cin >> n;
				num = n;
			cout << endl;
			
			escreve.open("notas.txt"); //abrindo arquivo de escrita no arquivo 
				
			for(int i=0; i<n; i++){
				cout << "Nota " << i+1 << " : ";
				cin >> notas[i];  //inserindo nota
				
				notas1.push_back(notas[i]); //inserindo as notas dentro de uma lista, para colocarmos no arquivo 
				
				arvore.insert(notas[i]); //inserindo dentro da arvore 
			}
			
			for(it= notas1.begin(); it != notas1.end(); it++){
				escreve << *it << endl; //inserindo as notas no arquivo por meio de lista 
			}		
		}
	
		void ordenar(){ //FUNÇÃO PARA ORDENAR A ARVORE 
			cout << "NOTAS ORDENADAS: " << endl;
			
			for(set<int>::iterator it = arvore.begin(); it!=arvore.end(); it++){ //ordenando por meio da arvore 
				cout << *it << "\t";
			}	
		}
		
		void buscar(){ //FUNÇÃO PARA BUSCAR POR NOTA 
			int busca;
			
			cout << "BUSCAR POR NOTA NO SISTEMA: " << endl << endl;
			cout << "Digite o valor da nota que você deseja buscar: " << endl;
				cin >> busca;
			
			if (arvore.find(busca)!=arvore.end()){ //busca por meio de uma arvore usando um metodo da biblioteca set 
				cout << "A nota " << busca << " foi cadastrada" << endl;
			}
			else{
				cout << "A nota " << busca << " NÃO foi cadastrada" << endl;
			}	
		}
		
		void apagar(){ //FUNÇÃO PARA APAGAR UMA NOTA 
			int remover;
			string w;
			int y;
			
			le.open("notas.txt"); //abre o arquivo de leitura
			escreve.open("notas.txt"); //abre o arquivo de escrita 
			
			cout << "Insira a nota que você deseja remover:" << endl;
			cin >> remover;
			arvore.erase(remover); //remove da arvore 
			
			for(it= notas1.begin(); it!=notas1.end(); it++){ 
				if(*it == remover){
					notas1.erase(it);   //remove da lista 
				}
			}
			
			while (! le.eof()){ //le todo o arquivo 
			getline(le, w);	
			}
			
			le.clear(); 
			le.close();
			
			escreve.clear();
			for(it= notas1.begin(); it!=notas1.end(); it++){
				escreve << *it << endl;   //reescreve a nova lista no arquivo 
				cout << *it << endl;
			}
			
			/*OBS: O ARQUIVO MOSTRARÁ AS PRIMEIRAS NOTAS INSERIDAS, QUANDO APAGAR UM ELE IRÁ ESCREVER AS NOTAS TIRANDO A NOTA EXCLUIDA*/
			
			for(int i=0; i<n; i++){   //for para eliminar dos vetores de notas 
				if(remover == notas[i]){
					notas[i]=0;  //fazer com que elimine dos vetores na hora de se fazer a media 
					n--;  //diminuir um na quantidade de notas ja que foi apagada um para realizar a media corretamente 
				}
			}
			
			escreve.close();
		}
		
		void media(){ //FUNÇÃO PARA A MEDIA 
			int soma, media;
			
			for(int i=0; i<n+1; i++){
				soma = soma + notas[i];	  //somando as notas nos vetores 
			}
			
			media=soma/n; //fazendo a media 
			
			cout << "Média da turma: " << media << endl;
		}
	
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	escola sistema; //instanciando objeto 
	
	int aux;
	
	inicio:
	cout << "\tSISTEMA DE NOTAS" << endl << endl;
	cout << "1- Inserir notas" << endl;
	cout << "2- Ordenar notas numa árvore" << endl;
	cout << "3- Buscar por nota" << endl;
	cout << "4- Apagar nota" << endl;
	cout << "5- Média da turma" << endl;
	cout << "6- Sair" << endl << endl;
	cout << "Escolha uma das opções acima: " << endl;
		cin >> aux;
		
	cout << endl << endl;
	
	switch(aux){
		case 1:
			sistema.inserir();
			break;
		case 2:
			sistema.ordenar();
			break;
		case 3:
			sistema.buscar();
			break;
		case 4:
			sistema.apagar();
			break;
		case 5:
			sistema.media();
			break;
		case 6:
			exit(6);
			break;
	}
	
	char aux_2;
	cout << endl;
	cout << "Deseja voltar ao menu? (s/n)" << endl;
		cin >> aux_2;

		if(aux_2 == 's' || aux_2 == 'S'){
			system("cls");
			cout << endl << endl;
			goto inicio; //voltará ao menu 
		}
		else {
			system("pause");
		} 
	
	return 0;
}
