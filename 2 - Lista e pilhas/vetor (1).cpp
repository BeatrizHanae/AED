#include <bits/stdc++.h>

using namespace std;

int main(){

/* 	int vetor[50];
	int i = 0, test;

	fill_n(vetor,50,-1);

	while(cin >> test, test){
		vetor[i] = test;
		i++;
	}

	i = 0;

	while(vetor[i] != -1){
		cout << vetor[i] << endl;
		i++;
	} */

	vector<int> myVetor;
	// Declaração de um vetor
	
	int test;
	// Variavel auxiliar


	// Enquanto o numero inserido for diferente de zero ele continua lendo 
	//o operador ',' ignora tudo antes dele	
	while(cin >> test,test){

	// um vetor se insere itens por tras sempre, por isso pra inserir e so jogar atrás "push back"
	// no numero que vc botou
		myVetor.push_back(test);
	}


	// for que conta de zero ate o fim do vetor, 
	//os vetores tem tamanho variavel, pode inserir a vontade,
	// ele nunca vai ser maior ou menor doq oq por nele.
	// por isso que .size() retorna o tamanho atual do seu vetor
	for(int i = 0; i < myVetor.size(); i++){
		cout << myVetor[i] << endl;
	}

	return 0;
}
