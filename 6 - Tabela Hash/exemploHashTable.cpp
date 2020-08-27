#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


//empty = esvaziar
class hashtable{
	private:
		static const int tableSize = 10;
		
		struct item{
			string name;
			string drink;
			item* next; // ponteiro de item, apenas para apontar para o outro item.
		};
		
		item* HashTable[tableSize];
	
	public:
	hashtable(){
		for (int i=0; i <tableSize; i++){
			HashTable[i] =  new item;
			HashTable[i] -> name = "empty";
			HashTable[i] -> drink = "empty";
			HashTable[i] -> next = NULL;
		}
	}
	
	int HashT(string key){
		int hasht=0; 
		int index;
		
			for (int i = 0; i < key.length(); i++){ // uma manipulação que vai somando os valores decimais de cada caracter de referência a tabela ASCII
				hasht = hasht + key[i];
				//cout << "Hash = " << hasht << endl;
			}
		
		//manipulação
	//	index = key.length(); //index, vai me dizer o qual o tamanho da minha chave, no caso uma string, é um array de caractere
		/*cout << "key[0] = " << key[0] << endl;  // me informa o dado contindo na posição do meu array de char;
		cout << "key[1] = " << (int) key[1] << endl; 
		cout << "key[2] = " << (int) key[2] << endl; 
		cout << "key[3] = " << (int) key[3] << endl; 
		cout << "key[4] = " << (char) key[4] << endl;  // me informa o número decimal que representa na tabela ASCII equivalente ao caractere; 
		*/
		index = hasht % tableSize;
			return index;
		}	
		
		void AddItem(string name, string drink){ //adicionar item
			int index = HashT(name); 
			
			if(HashTable[index] -> name == "empty"){ // 
				HashTable[index] -> name = name;
				HashTable[index] -> drink = drink;
			}
			else {
				item* Ptr = HashTable[index];
				item* n = new item;
				n -> name = name;
				n -> drink = drink;
				n -> next = NULL;
				while(Ptr-> next != NULL){
					Ptr = Ptr-> next;
				}
				Ptr->next = n;
			}
		}
		int NumberOfItemsInIndex(int index){
			int count = 0;
			
			if(HashTable[index] -> name == "empty"){
				return count;
			} else {
				count++;
				item* Ptr = HashTable[index];
				while(Ptr->next != NULL){
					count++;
					Ptr = Ptr->next;
				}
			}
		}
		void PrintTable(){
			int number;
			for(int i=0; i<tableSize; i++){
				number = NumberOfItemsInIndex(i);
				cout << "-----------------\n";
				cout << "Index = " << i << endl;
				cout << HashTable[i] -> name << endl;
				cout << HashTable[i] -> drink << endl;
				cout << " Of items = " << number << endl;
				cout << "-----------------\n";
			}
		}
};



int main (){
	hashtable hashObj;
	int index;
	hashtable Hashy;
	
	Hashy.AddItem("Paul","Locha");
	Hashy.AddItem("Kim","Iced Mocha");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Laura","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
	Hashy.AddItem("Annie","Hot Chocolate");
		
	Hashy.PrintTable();
		
	index =	hashObj.HashT("Paul.");
	cout << "Index = " <<index << endl;
	return 0;	
}

