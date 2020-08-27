#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	int numeroBuscado, n, q, i , numero1;
	vector <int> numeroAuxiliar;
	
	cout << "Quantos termos devera ter sua PG?" << endl;
	cin >> n;
	
	cout << "Qual o primeiro termo da PG? " << endl;
	cin >> numero1;
	
	cout << "Qual o valor da razão da PG?" << endl;
	cin >> q;
	
	for (i=0; i<n-1; i++){
		numeroAuxiliar[i] = numero1*q^(n-1);
		numero.push_back(numeroAuxiliar[i]);
	}
	
	cout << "Qual o numero a ser buscado?" << endl;
	cin >> numeroBuscado;
	
	while (numeroAuxiliar[i] < numero Buscado)
	 for (i=0; i<n-1; i++){
		if (numeroAuxiliar[i] == numeroBuscado){
			cout << "O numero " << numeroAuxiliar[i] << "foi encontrado!" << endl; 
		} else {
			cout << "O numero buscado nao se encontra nessa progressão geometrica" << endl;
		}
	}
	
	return 0;
}
