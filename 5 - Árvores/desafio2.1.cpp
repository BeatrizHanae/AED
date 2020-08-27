#include <iostream>
#include <vector>
#include <set>

using namespace std;

//classe do nó
class Nodo {
public:
    //construtor
    Nodo(int ano){
    	nomes = new vector <string>;
		this -> ano = ano;
	}

	//destrutor
    ~Nodo() {
    delete nomes;
	}
	
	//adiciona os nomes
    void adicionar(const string &nome){
    	nomes->push_back(nome);
	}
	
	//funcao que procura se o nome existe no Nó
    bool existe(const string &nome){
    	    for (vector<string>::const_iterator it = nomes->begin(); it != nomes->end(); it++) {
        if (nome == *it) {
            return true;
        }
    }
    return false;
}

    int getAno() const  {
    	    return ano;
	}
	
	private:
    int ano;
    vector<string> *nomes;
    
};

//classe da arvore
class ArvoreBinaria {
public:
    ArvoreBinaria() = default;
    virtual ~ArvoreBinaria(){
	 for (Nodo* nodo: nodos) {
        delete nodo;
   	 }
   	 nodos.clear();
	}
	//inclui cada nó
    void incluir(Nodo* nodo){
    	nodos.insert(nodo);
	}

	//no nó que esta, procura o nome no nó...logo chama a função "existe" para verificar se existe, se existir, ele retorno o ano q esta.
    Nodo* procurar(const string &nome){
    	    for (Nodo* nodo: nodos) {
        if (nodo->existe(nome)) {
            return nodo;
        }
    }

    return nullptr;
	}


private:
    set<Nodo*> nodos;
};


int main() {
    setlocale(LC_ALL, "");
    int n, ano;
    ArvoreBinaria arvore;
    string desejaContinuar;
    Nodo* item = nullptr; //criando o objeto Nodo
    string nome;

    while (true) {
        // For windows
        system("cls");

        do {system("cls");
            cout << "Escolha uma opcao: " << endl;
            cout << "1. Inserir elemento na Arvore" << endl;
            cout << "2. Inserir nome no ultimo item incluido na arvore" << endl;
            cout << "3. Procurar elemento na Arvore" << endl;
            cout << "4. Sair do programa" << endl;
            cin >> n;
            
        } while (n < 0 || n > 5);

        switch (n) {
            case 1:
                cout << "Entre com o elemento que você deseja inserir" << endl;
                cin >> ano;

                item = new Nodo(ano);
                arvore.incluir(item);

                break;
            case 2:
                if (item == nullptr) {
                    cout << "Insira primeiramente o ano na arvore" << endl;
                    break;
                }

                cout << "Informe o nome" << endl;

                cin >> nome;
                item->adicionar(nome);

                break;

            case 3:
                cout << "Informe o nome procurado" << endl;
                cin >> nome;

                item = arvore.procurar(nome);

                if (item != nullptr) {
                    cout << "Encontrado no ano " << item->getAno() << endl;
                } else {
                    cout << "Nao encontrado" << endl;
                }

                break;
            case 4: 
            	exit(4);
            	break;

            default:
                return 0;
        }
        system("pause");
    }

	
    // Varrer  arvore e fazer delete de cada Node incluido, limpando a memória
    if (item != nullptr) {
        delete item;
    }

    return 0;
}
