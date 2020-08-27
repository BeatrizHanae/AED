#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*void comparaString (string s1[], string s2){


}*/




int main(){
	vector <string> palavrasInseridas;
	string palavraBuscada, palavras;
	int n, i;
	
	cout << "Qual a palavra que deverá ser buscada?" << endl;
	cin >> palavraBuscada;
	
	cout << "Quantas palavras o dicionario tem?" << endl;
	cin >> n;
	
	cout << "Insira as palavras: " << endl;
	for ( i=0; i < n ; i++){
		cin >> palavras;
		palavrasInseridas.push_back(palavras);
	}
	for( i=0; i<n ; i++){
		if (palavraBuscada.compare(palavrasInseridas) == 0){
			cout <<"A palavra " << palavraBuscada << "foi encontrada na linha " << i << endl;	
			break;
		}
		else {
			cout << "-1.\n A palava nao existe no dicionario.";
		}
	}
	//compareString (palavrasInseridas, palavraBuscada);
		
	return 0;
}
