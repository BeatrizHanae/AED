//Arvore Binária

#include <iostream>
//                  8
//             3         10
//          1     6           14
//             4     7    13

using namespace std;
class No {
	private:
	No *esq , *dir;
	int chave; //valor q é inserido;
	
	public:
		
	No (int chave){ //construtor, criando o nó "folha";
		
		this -> chave = chave;
		esq = NULL; // por ser nó folha, não tem no a direita e nem a esquerda
		dir = NULL;
	}
	
	int getChave(){ //retornando a chave;
		return chave;
	}
	
	No* getEsq(){ //retorna o nó a esquerda;
		return esq;
	}
	
	No* getDir(){ // retornando o nó a direita;
		return dir;
	}
	
	void setEsq(No* no){
		esq = no; //setar o nó a esquerda;
	}
	
	void setDir(No* no){
		dir = no;
	}
	
};

class Arvore{ 
	
	private:
		No* raiz; 
		
	public:
		Arvore(){ // construtor
			raiz = NULL;
		}
		
		void inserir(int chave){
			if(raiz == NULL){ // árvore esta vazia
				raiz = new No(chave); // cria um novo nó 				
			} else {
				inserirAux(raiz, chave);
			}
		}
		
		void inserirAux(No* no, int chave){
			if (chave < no->getChave()){ //se a chave for menor que a chave do nó corrente;
				if(no->getEsq() == NULL){ //verificando se existe um nó a esquerda
					No* novo_no = new No(chave); //se não existe, cria um novo Nó
					no->setEsq(novo_no);  //setar o nó a esquerda;
					 /*Se a chave for menor que o nó corrente,
					e se o nó a esquerda não tiver nada, então ali q vai inserir.*/
				} else {
					inserirAux(no->getEsq(),chave); // se o nó corrente tiver nó a esquerda, então tem que continuar a busca do nó a esquerda 
				}
			} 
			else if(chave > no->getChave()){
				if(no->getDir()==NULL){
					No* novo_no = new No(chave);
					no->setDir(novo_no);
				} else {
					inserirAux(no->getDir(), chave);
				}
			}
		}
		No* getRaiz(){
			return raiz;
		}
		
		void emOrdem(No* no){
			if(no != NULL){
				emOrdem(no->getEsq()); 
				cout << no->getChave() << " ";
				emOrdem(no->getDir());
			}
		}
};

int main (){
	Arvore arv;
	
	arv.inserir(8);
	arv.inserir(10);
	arv.inserir(14);
	arv.inserir(13);
	arv.inserir(3);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);
	
	cout << "Percorrndo em ordem...\n";
	arv.emOrdem(arv.getRaiz());
	
	return 0;
}


/*Impressão da arvore: 
PRE-ORDEM: RAIZ, ESQUERDA E DIREITA;
IN ORDEM: ESQUERDA, RAIZ, DIREITA;
POS-ORDEM: ESQUERDA, DIREITA, RAIZ;*/
