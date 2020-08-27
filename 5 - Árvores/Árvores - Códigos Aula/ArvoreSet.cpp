#include <iostream>
#include <set>
#include <vector>

using namespace std;

/* Na STL, a implementa��o do container set � uma �rvore bin�ria de busca, sendo auto-balanceada de acordo com os crit�rios
de balanceamento das �rvores rubro-negras
� importante ressaltar que, em containers do tipo set, � poss�vel e remover elementos, bem como encontrar elementos
de forma muito r�pida, mas n�o � poss�vel modificar o valor de elementos existentes, assim como em �rvores bin�rias 
*/

class Node 
{
public: 
	Node(int ano) { 
		this->ano = ano;  
		this->nomes = new vector<string>(); 
	}
	~Node() {
		delete this->nomes;	
	};
	
	void adicionar_nome(const string& nome);
	
private:

	int ano;
	vector<string>* nomes;	
};

void Node::adicionar_nome(const string& nome)
{
	this->nomes->push_back(nome);	
}

int main(){
	setlocale(LC_ALL,"");
	int n, ano;
	set<Node*> arvoreBinaria;
	string desejaContinuar;
	Node* item = nullptr;
	string nome;
	 
	while(1){
		system("cls");
	do{
		cout << "Escolha uma op��o: " << endl;
		cout << "1. Inserir elemento na �rvore" << endl;
		cout << "2. Inserir nome no ultimo item incluido na arvore" << endl;
		cout << "3. Procurar elemento na �rvore" << endl;
		cout << "4. Exibir �rvore ordenada" << endl;
		cout << "5. Sair do programa" << endl;
		cin >> n;		
	}while(n<0 || n>5);
	
	switch(n){
		case 1:
			cout << "Entre com o elemento que voc� deseja inserir" << endl;
			cin >> ano;
			
			item = new Node(ano);
						
			arvoreBinaria.insert(item);
			break;
		case 2: 
			cout << "Informe o nome:" << endl;
			if (item == nullptr) {
				cout << "Insira primeiramente o ano na arvore" << endl;
				break;
			}
			cin >> nome;
			item->adicionar_nome(nome);
			break;
	/*	case 3:
			cout << "Entre com o elemento que voc� deseja verificar se est� na �rvore" << endl;
			cin >> auxiliar;
			if (arvoreBinaria.find(auxiliar)!=arvoreBinaria.end()){
				cout << "O elemento " << auxiliar << " est� presente na �rvore" << endl;
			}
			else{
				cout << "O elemento " << auxiliar << " n�o est� presente na �rvore" << endl;
			}
			break;
		case 4:
			for(set<int>::iterator it = arvoreBinaria.begin(); it!=arvoreBinaria.end(); it++){
				cout << *it << "\t";
			}
			cout << endl;
			break;*/
		default: 
			return 0;
	}
	
	// Varrer  arvore e fazer delete de cada Node incluido
	system("pause");
};
	return 0;
	
	
}
