//Desafio 3 de Ordenação
//Beatriz Hanae Fujimoto - 160113814

#include <iostream>
#include <vector>


using namespace std;


void imprimeVetor(vector<float> &vetor1, int qtd){
	for (int i=0; i<qtd; i++){
		cout << "Valor: R$ " << vetor1[i]  << endl;
	}
}

void troca(vector<float> &vetor, int i, int j){
	float aux;
	
		aux = vetor[j];
    	vetor[j] = vetor[i];
  		vetor[i] = aux;
}

void ordenar(vector<float> &vetor1, vector<string> &vetor2 ,int qtd){
	
	for(int i=0;i<qtd-1; i++){
		for (int j=0; j<qtd-i-1;j++){
			if (vetor1[j] > vetor1[j+1]){
				troca(vetor1, j, j+1);	
			}
		}
	}
}

int main(){
	vector <float> pagamentoD, pagamentoC;
	vector <string> formaD, formaC;
	float pagAux, aux;
	string formapag;
	int i, j, N;
	
	cout << "Quantas transacoes foram feitas?" << endl;
	cin >> N;
	
	cout << "\nInsira as transacoes do dia: \n" << endl;
	for (i=0; i<N;i++){
		cout << "Qual o valor?" << endl;
		cin >> pagAux;
		cout << "Qual a forma de pagamento? (DEBITO ou CREDITO)." << endl;
		cin >> formapag;
		if (formapag == "DEBITO"){
			pagamentoD.push_back(pagAux);
			formaD.push_back(formapag);	
		} else if (formapag == "CREDITO"){
			pagamentoC.push_back(pagAux);
			formaC.push_back(formapag);	
		}
	}

	cout << "\nAs transacoes em debito do dia, foram:" << endl;
	ordenar(pagamentoD, formaD, formaD.size());
	imprimeVetor(pagamentoD, formaD.size());
	
	cout << "\nAs transacoes em credito do dia, foram:" << endl;
	ordenar(pagamentoC, formaC, formaC.size());
	imprimeVetor(pagamentoC, formaC.size());

	return 0;
}
