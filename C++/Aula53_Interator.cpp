/*Navegar dentro de uma cole��o de dados, aponta um determinado item para uma cole��o 
	ex: VECTOR , suporta fun��es begin() e end() que retorna o interator para o elemento inicial da cole��o e para o elemento final da col��o, respectivamente. 
*/

#include <iostream> 
#include <vector>

using namespace std;

int main(){
	
	vector<string>produtos={"mouse", "teclado", "monitor", "gabinete", "hello"}; //poderia usar o push_back para incluir os dados
	vector<string>::iterator it;	//criando o interator para navegar entre os elementos
	//auto::interator it; -> obs: para criar um interator para outros vectores, usamos AUTO ao inv�s de especificar o TIPO(string, int, float) do interator.
	
	it = produtos.begin(); // ele retorna o primeiro elemento da cole��o (no caso produto do tipo vector)
	//it = produtos.end()-1;  Temos 5 elementos, mas o iterator conta de 1 a 5 e n�o 0 a 4, logo coloca-se "-1" para apontar para o 4� elemento.
	//cout << produtos[0] << endl; //imprime o primeiro elemento do vetor -> mouse;
	
	// Para navegar entre a cole��o, podemos usar: advance , next, prev
	
		//advance(it,3); //par�metros: cole��o, �ndice (numero que avan�o a partir do iterator begin -> logo no exemplo avan�o 3 casa);

		//cout << *next(it,3) <<endl; //Direto no cout, avan�a 3 casas para a direita do vector;
		
		//cout << *prev(it,3) <<endl; //Direto no COUT, avan�a 3 casas para a esquerda do vector;
	cout << *it << endl; //coloca como ponteiro pois o interator APONTA para o primeiro elemento da cole��o

	return 0;	
}
