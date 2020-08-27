#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int vetor[50];
	int i = 0, test;

	fill_n(vetor,10,-1);

	while(cin >> test, test){
		vetor[i] = test;
		i++;
	}

	i = 0;

	while(vetor[i] != -1){
		cout << vetor[i] << endl;
		i++;
	}

	return 0;
}
