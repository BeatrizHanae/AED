//Arvore Bin�ria

#include <iostream>
//                  8
//             3         10
//          1     6           14
//             4     7    13

using namespace std;
class No {
	private:
	No *esq , *dir;
	int chave; //valor q � inserido;
	
	public:
		
	No (int chave){ //construtor, criando o n� "folha";
		
		this -> chave = chave;
		esq = NULL; // por ser n� folha, n�o tem no a direita e nem a esquerda
		dir = NULL;
	}
	
	int getChave(){ //retornando a chave;
		return chave;
	}
	
	No* getEsq(){ //retorna o n� a esquerda;
		return esq;
	}
	
	No* getDir(){ // retornando o n� a direita;
		return dir;
	}
	
	void setEsq(No* no){
		esq = no; //setar o n� a esquerda;
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
			if(raiz == NULL){ // �rvore esta vazia
				raiz = new No(chave); // cria um novo n� 				
			} else {
				inserirAux(raiz, chave);
			}
		}
		
		void inserirAux(No* no, int chave){
			if (chave < no->getChave()){ //se a chave for menor que a chave do n� corrente;
				if(no->getEsq() == NULL){ //verificando se existe um n� a esquerda
					No* novo_no = new No(chave); //se n�o existe, cria um novo N�
					no->setEsq(novo_no);  //setar o n� a esquerda;
					 /*Se a chave for menor que o n� corrente,
					e se o n� a esquerda n�o tiver nada, ent�o ali q vai inserir.*/
				} else {
					inserirAux(no->getEsq(),chave); // se o n� corrente tiver n� a esquerda, ent�o tem que continuar a busca do n� a esquerda 
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


/*Impress�o da arvore: 
PRE-ORDEM: RAIZ, ESQUERDA E DIREITA;
IN ORDEM: ESQUERDA, RAIZ, DIREITA;
POS-ORDEM: ESQUERDA, DIREITA, RAIZ;*/
