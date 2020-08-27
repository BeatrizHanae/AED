#include <iostream>
#include <vector>


using namespace std;

class No{ 
	public:
		int valor;
		No *proximo;
		No(){
			this->proximo = NULL;
		};
		No(int Elemento){
			this->valor = Elemento;
			this->proximo = NULL; 
		}
		int &InserirElemento (int NovoElemento); //Inserir Elemento (Obs: A refer?ncia ocorre apenas para 
												//permitir alterar a lista sem passar inicio como par?metro)
		void deletarElemento(int Elemento);
		void mostrar();	
};

int &No::InserirElemento(int NovoElemento)
{
  No *NovoNo = new No(NovoElemento); // Cria um novo n? para ser anexado na lista
  No *head = this->proximo; // Aponta para o in?cio da lista 
  if (head == NULL)
    {
      NovoNo->proximo = NovoNo; //Inicializa o primeiro n? apontando para si mesmo,
	  							//pois ele ser? o in?cio da lista circular 
      head = NovoNo; // Preenche o in?cio com o conte?do do in?cio
      this->proximo = NovoNo; 
      return NovoElemento; // Retorno completamente opcional com fun??o meramente de debug
    }
  No *aux = head; 
  while (aux->proximo !=  head) //Se n?o for o primeiro elemento, vai percorrendo a lista
  								//at? encontrar o ?ltimo n? [aquele que aponta para o primeiro elemento]
    {	
      aux = aux->proximo;
    }
  aux->proximo = NovoNo; // Aponta o ?ltimo elemento para o novo N?
  NovoNo->proximo = head; // Aponta o Novo N? de volta para o in?cio da lista
}

void No::deletarElemento(int Elemento)
{
  No *head = this->proximo;	
  No * aux = head;
  No * anterior = NULL; 
  while (aux->proximo !=  head) //Percorre a lista, procurando o valor para ser removido
    {
      if (aux->valor == Elemento){ //Determina a primeira ocorr?ncia do valor 
	  	break;
		  }
      anterior = aux; 
      aux = aux->proximo;
    }

  if (aux == head) //Tratamento de Borda: Caso o in?cio da lista seja removido, encontra o ?ltimo n?
  				  //e aponta para o sucessor do in?cio da lista, criando assim uma nova lista
    {
      while (aux->proximo != head)
        {
          aux = aux->proximo;
        }
      	aux->proximo = head->proximo;
       delete head; //Importante para evitar memory leak
       this->proximo = (aux->proximo); //Define a nova "raiz" como o primeiro elemento
       this->valor = (aux->valor); //Define a nova "raiz" como o primeiro elemento 
       //head = aux->proximo;
    }
  else // Caso contr?rio, apenas remove o elemento desejado
    {
      anterior->proximo = aux->proximo;
      delete aux; // Importante para evitar memory leak
    }
}

void No::mostrar(){
	No *head = this->proximo; 
  if (head)
    {
      No * tmp = head;
      while (tmp->proximo != head)  // Percorre a lista completa
        {
          cout << tmp->valor << "\t"; //Imprime o valor de cada elemento separado por tabula??es
          tmp = tmp->proximo;
        }
      cout << tmp->valor << endl; // Imprime o valor do ?ltimo elemento e quebra a linha
    }
}



int main(){
	setlocale(LC_ALL,"");
	No inicio;
	int n, Elemento;
	while(1){
	do{
		cout << "Escolha uma a??o: " << endl;
		cout << "1. Insira um novo elemento na lista circular" << endl;
		cout << "2. Remova um elemento" << endl;
		cout << "3. Apresente a lista" << endl;
		cin >> n;
	}
	while(n<1 || n>3);
	
	switch(n){
		case 1:
			cout << "Entre com o elemento a ser inserido" << endl;
			cin >> Elemento;
			inicio.InserirElemento(Elemento);
			break;
		case 2:
			cout << "Entre com o Elemento a ser removido" << endl;
			cin >> Elemento;
			inicio.deletarElemento(Elemento);
			break;
		default:
			inicio.mostrar();
			break;
		break;		
	};
};
	return 0;
}


