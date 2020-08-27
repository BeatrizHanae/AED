//Adrielle Custodio - 180096699
// DESAFIO 3 -ORDENACAO
#include<iostream>

using namespace std;
class banco{
	public:
		double debito[100]={0};		//vetoresss
		double credito[100]={0};
		int cont=0;		//cont para incrementar a cada transacao
		double valor;
	
		int aux_d;
		int aux_c;
		
		void inserir(){
			cout << "ISERCAO DE VALORES ! \n Quantos valores serao no debito? "<< endl;
			cin>>aux_d;
			cout << "Quantos valores serao no credito? " << endl;
			cin >> aux_c;
			
			for(int j =0; j<aux_d ; j++){		//colocando os valores em vetores separados
				cout << "valor " << cont+1 << " no debito: " ;
				cin >> valor;
				debito[j]=valor;
				cont++;
			}
			
			for(int k= 0 ; k<aux_c ; k++){
				cout << "valor " << cont+1 << " no credito: " ;
				cin >> valor;
				credito[k]=valor;
				cont++;
			}
		}	
		
		
		void ordenar(){
			cont=0;
			int verdade, troca, continua;		//variaveis do algoritmo bouble sort
			verdade=1;	
			troca= 0;
			continua=1;
			double aux;	
			
			
		cout << "transacoes: "<< endl;
		//A SEGUIR REALIZEI ALGORTIMO BOUBLE SORT PARA OS VALORES DE DEBITO E CREDITO SEPARADAMENTE
		while(continua==1){			//COM O DEBITO
				troca=0;
				
			for(int i=0 ; i<aux_d-1 ; i++){	
			
				if (debito[i] > debito[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = debito[i+1];
					debito[i+1] = debito[i];
					debito[i] = aux;
					troca = 1;		
				}
			}
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
		}
			for (int a =aux_d-1 ; a>-1 ; a--){//DANDO COUT
			cout << "transacao " << cont+1 << " : R$" <<debito[a] << " - debito" << endl;
			cont++;
		}
		cout << endl;		
				
			//agora mostrar credito ordenado
			continua =1;	
			while(continua==1){		
				troca=0;
				
			for(int i=0 ; i<aux_c-1 ; i++){	
			
				if (credito[i] > credito[i+1]){		//se o termo i for maior do que o termo i+1, eles serão trocados
					
					aux = credito[i+1];
					credito[i+1] = credito[i];
					credito[i] = aux;
					troca = 1;		
				}
			}
			if(troca == 0){
				continua = 0;		//se não houver nenhuma trca durante a varredura, o programa sai do loop while
			}
			
		}
			for (int a =aux_c-1 ; a>-1 ; a--){		//DANDO COUT
			cout << "transacao " << cont +1 <<" : R$"<< credito[a] << " - credito" << endl;
			cont++;
		}	
			}
		
};

int main(){
	banco drikas;		//instanciando
	
	drikas.inserir();		//chamando metodosss
	drikas.ordenar();
	
	return 0;
}
