#include <iostream>
using namespace std;

void preencher(int v[]){
	v[0] = 13;
	v[1] = 56;
	v[2] = 76;
	v[3] = 19;
	v[4] = 23;
	v[5] = 34;
}

int main(){
	int v[6];
	int n, i;	
	bool achou;
	
	preencher(v);	//fun??o para preencher os valores
	achou = false;	// setar a vari?vel "achou" como false
	
	cout << "Insira o numero que deseja procurar:\n";
	cin >> n;	//insira o n?mero que deseja procurar
	
	for(i=0 ; i<6 ; i++){		
		if(v[i] == n){
			achou = true;		//caso ache o numero digitado pelo usu?rio a vari?vel achou muda para "true"
		}
	}
	
	if (achou==true){
		cout << "\no numero "<< n <<" foi encontrado";	//condi??o para caso o numero digitado for encontrado
	}else{
		cout <<"\n" << n << " nao foi encontrado\n";	//condi??o para caso o numero digitado n?o for encontrado
	}
	
	
	return 0;
}
