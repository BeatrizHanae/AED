#include <iostream>
using namespace std;

void preencher(int v[]){
	v[0] = 13;
	v[1] = 56;
	v[2] = 76;
	v[3] = 19;
	v[4] = 23;

}

int main(){
	int v[6];
	int n, i, sentinela;	
	bool achou;
	
	preencher(v);	//funcao para preencher os valores
	achou = false;	// setar a variavel "achou" como false
	
	cout << "Insira o numero que deseja procurar:\n";
	cin >> n;	//insira o n?mero que deseja procurar
	
	sentinela = n;
	v[5] = sentinela; //sentinela
	
	for(i=0 ; v[i] != sentinela ; i++){	//a busca continuar? at? o v[i] ter o valor do sentinela	
	}
	
	if((i != 5) && (v[i] == n)){
	achou = true;		//caso ache o numero digitado pelo usu?rioa vari?vel achou muda para "true"
	}
	
	if(achou==true){
		cout << "\no numero "<< n <<" foi encontrado\n\n";	//condi??o para caso o numero digitado for encontrado
	}
	if(achou==false){
		cout <<"\no numero " << n << " nao foi encontrado\n\n";	//condi??o para caso o numero digitado n?o for encontrado
	}
	
	
	return 0;
}
