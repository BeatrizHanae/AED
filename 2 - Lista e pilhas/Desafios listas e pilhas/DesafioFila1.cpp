//Beatriz Hanae Fujimoto - 160113814
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int minIndex(queue<string> &ficha, int sortedIndex){
	
	int min_index = -1 ;
	string min_val = "zzzzzz";
	int n = ficha.size();
	for (int i=0;i<n;i++){
		string curr = ficha.front();
		ficha.pop();
		
		if (curr <= min_val && i <= sortedIndex){
			min_index = i;
			min_val = curr;
		}
		ficha.push(curr);
	}
	return min_index;	
}

void insertMinToRear(queue<string> &q, int min_index) 
{ 
    string min_val; 
    int n = q.size(); 
    for (int i = 0; i < n; i++) 
    { 
        string curr = q.front(); 
        q.pop(); 
        if (i != min_index) 
            q.push(curr); 
        else
            min_val = curr; 
    } 
    q.push(min_val); 
} 
  
  
void sortQueue(queue<string> &q) 
{ 
    for (int i = 1; i <= q.size(); i++) 
    { 
        int min_index = minIndex(q, q.size() - i); 
        insertMinToRear(q, min_index);
    } 
} 

void search1(vector<string> &q){
	vector<string>::iterator it;
	string palavra;
	it = q.begin();

	cout << "Qual o nome que deseja procurar?" << endl;
	cin >> palavra;
	it = find(q.begin(), q.end(), palavra);
		if(it != q.end()){
			cout << "O nome: " <<palavra <<  ". Foi encontrado!" << endl;
		}
		else {
			cout << "Nenhuma ficha com esse nome foi encontrado!" <<endl;
		}	
	
}

void convert(queue<string> &q){
	vector<string> ficha3;
	
	ficha3.reserve(q.size());
		for (size_t i= 0; i < q.size(); i++ ){
			ficha3.push_back(q.front());
			q.pop();
			q.push(ficha3.back());
		}
	search1(ficha3);
}


int main(){
	int opc, N;
	queue<string> ficha1;
	string nome;

	while(opc !=5){
		
		cout << "1- Iserir fichas." <<endl;
		cout << "2- Organizar fichas" <<endl;
		cout << "3- Acessar elemento da fila." << endl;
		cout << "4- Apresentar fichas" <<endl;
		cout << "5- Sair" << endl;
		cin >> opc;
		
		switch(opc){
			case 1:{
				cout << "Quantas fichas deseja inserir?" << endl;
				cin >> N;

				for (int i=0; i<N; i++){
					cout << "Digite as fichas:" <<endl;
					cin >> nome;
					ficha1.push(nome);
				}
				break;
			}
			case 2:{
				sortQueue(ficha1);
				break;
			}
			case 3:{
				convert(ficha1);
				break;
			}
			case 4:{
				for (int i=0;i<N;i++){
					cout << ficha1.front() <<endl;
					ficha1.pop();
				}
				break;
			}
			case 5:{
				exit(5);
				break;
			}
		}
		
	}
	return 0;
}
