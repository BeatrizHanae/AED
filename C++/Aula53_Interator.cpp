/*Navegar dentro de uma coleção de dados, aponta um determinado item para uma coleção 
	ex: VECTOR , suporta funções begin() e end() que retorna o interator para o elemento inicial da coleção e para o elemento final da colção, respectivamente. 
*/

#include <iostream> 
#include <vector>

using namespace std;

int main(){
	
	vector<string>produtos={"mouse", "teclado", "monitor", "gabinete", "hello"}; //poderia usar o push_back para incluir os dados
	vector<string>::iterator it;	//criando o interator para navegar entre os elementos
	//auto::interator it; -> obs: para criar um interator para outros vectores, usamos AUTO ao invés de especificar o TIPO(string, int, float) do interator.
	
	it = produtos.begin(); // ele retorna o primeiro elemento da coleção (no caso produto do tipo vector)
	//it = produtos.end()-1;  Temos 5 elementos, mas o iterator conta de 1 a 5 e não 0 a 4, logo coloca-se "-1" para apontar para o 4º elemento.
	//cout << produtos[0] << endl; //imprime o primeiro elemento do vetor -> mouse;
	
	// Para navegar entre a coleção, podemos usar: advance , next, prev
	
		//advance(it,3); //parâmetros: coleção, índice (numero que avanço a partir do iterator begin -> logo no exemplo avanço 3 casa);

		//cout << *next(it,3) <<endl; //Direto no cout, avança 3 casas para a direita do vector;
		
		//cout << *prev(it,3) <<endl; //Direto no COUT, avança 3 casas para a esquerda do vector;
	cout << *it << endl; //coloca como ponteiro pois o interator APONTA para o primeiro elemento da coleção

	return 0;	
}
