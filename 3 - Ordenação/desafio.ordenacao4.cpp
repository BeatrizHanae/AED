//Adrielle Custodio - 180096699
//DESAFIO ORDENAÇÃO - PARTE 2

#include<iostream>
#include<string>
#include<list>
								//MAXIMO DE 15
using namespace std;

class nutricionista{
	public:
		
	list<string> nome;		//criando as listas para cada info juntamente com os iterators
	list<string>:: iterator it_nome;
	
	list<double>idade;
	list<double>::iterator it_idade;
	
	list<double>peso;
	list<double>:: iterator it_peso;
	
	list<double> altura;
	list<double>:: iterator it_altura;
	
	list<float> imc;
	list<float>:: iterator it_imc;
	int cont; // pra contar quantos pacientes foram cadastrados
	
	string nome_aux;
	double altura_aux, peso_aux;		//variaveis auxiliares pra colocar elementos na lista
	int idade_aux;
	float imc_aux;

	
	void cadastro(){		//funcao para cadastrar
		
		if(cont>15){		//cont q vai impossibilitar q mais de 15 pacientes sejam atendidos
			cout << "NAO E POSSIVEL REALIZAR ESSA OPERACAO! MAXIMO DE ATENDIMENTOS ATINGIDO!" << endl;
		}
		else{
		
		cout << "OLA! BEM VINDO. PARA CONTINUAR, INSIRA OS DADOS ABAIXO: "<< endl;
		
		cout << "NOME:  ";		//cout e cin normalmente
		cin >> nome_aux;
		cout << "IDADE:  ";
		cin >> idade_aux;
		//cout << "teste";
		cout <<"PESO:  " ;
		cin >> peso_aux;
		cout << "ALTURA:  ";
		cin >> altura_aux;
	
		nome.push_front(nome_aux);
		idade.push_front(idade_aux);		//colocando nas listas as infos
		peso.push_front(peso_aux);
		altura.push_front(altura_aux);
		
		imc_aux = ((peso_aux)/(altura_aux*altura_aux));		//calculo do imc de cada pessoa
		cont++;
		
		imc.push_front(imc_aux);		//inseriondo o imc na fila tbm
		
		
		}
		
	
	}
	
	void mostrar(){		//void para mostrar quais sao os usuarios ja cadastrados
		int cont_paciente=1;
		cout << "Os usuarios cadastrados sao: "<< endl << endl;
		
		it_altura= altura.begin();		//usando o iterator
		it_idade= idade.begin();
		it_peso = peso.begin();
		
		for(it_nome= nome.begin() ; it_nome!= nome.end() ; it_nome++){		//for simples  pra mostrar todos os elementos das listas
			cout << "PACIENTE " << cont_paciente << ": "<< endl;
			cout << "NOME: " << *it_nome << endl;
			cout << "IDADE: " <<*it_idade << endl;
			cout << "PESO: " << *it_peso << endl;
			cout << "ALTURA: " << *it_altura << endl;
			
			cout << endl << endl;
			it_altura++;
			it_idade++;
			it_peso++;
			
			cont_paciente++;
		}
	}
	
	void fila(){		//fila que vai ordenar de acordo com os parametros estabelecidos
		idade.sort();		//usando o metodo sort e reverse
		idade.reverse();
		
		it_idade = idade.begin();
		it_altura = altura.begin();
		it_peso = peso.begin();
		
		for(it_nome = nome.begin() ; it_nome!= nome.end() ; it_nome++){
			if(*it_idade >=60){		//cout SE for maior q 60
				cout << "NOME: " << *it_nome << endl;
				cout << "IDADE: "<< *it_idade << endl;
				cout << "PESO: " << *it_peso << endl;
				cout << "ALTURA: " << *it_altura << endl;
				cout << endl;
			}
			it_altura++;
			it_idade++;
			it_peso++;
		
		}
		
		imc.sort();
		imc.reverse();
		
		it_idade = idade.begin();
		it_altura = altura.begin();
		it_peso = peso.begin();
		it_imc = imc.begin();
		
		for(it_nome = nome.begin() ; it_nome!= nome.end() ; it_nome++){
			
			if(*it_idade<60){		//cout SE for <60 && de acordo com imc
				
				cout << "NOME: " << *it_nome << endl;
				cout << "IDADE: "<< *it_idade << endl;
				cout << "PESO: " << *it_peso << endl;
				cout << "ALTURA: " << *it_altura << endl;
				cout << "IMC " << *it_imc;
				cout << endl;
				if(*it_imc>40)
					cout << " - OBESIDADE III "<< endl;
				if(*it_imc>=35.0 && *it_imc<39.99)
					cout << " - OBESIDADE III " << endl;
				if(*it_imc>=30.0 && *it_imc<34.99)
					cout << " - OBESIDADE I " << endl;
				if(*it_imc>=25.0 && *it_imc<29.99)
					cout << " - ACIMA DO PESO " << endl;
				if(*it_imc>=18.5 && *it_imc<24.99)
					cout << " - SAUDAVEL " << endl;
				if(*it_imc<18.5)
					cout << " - MAGREZA " << endl;	
					
					cout << endl;			 	
			} 
			
			it_altura++;
			it_idade++;
			it_peso++;	
			it_imc++;
		}		
		
	}
	
	void pesquisa(){		//funcao para fins de pesquisa
		int choice;
		int tam=0, i=0;
		int meio=0;			
		float med=0;
		cout << "ESCOLHA :" << endl;
		cout << "1. Mediana do idade" << endl;
		cout << "2. Mediana da altura" << endl;
		cout << "3. Mediana da peso " << endl;
		cout << "4. Mediana do imc " << endl;
		cin >> choice;
		
		switch(choice){
			case 1:	//	vou comentar so o rimeiro caso, pois eles sao identicos, mudando a info alvo
				idade.sort();		//ordeno as listas
				idade.reverse();
		
				tam = peso.size();		//aqui é pra ver quak o tamanho da lista
				if(tam%2==0){		//SE tiver elementos pares
					meio = tam/2;		//a metade será aqui
			
				for(it_idade= idade.begin(), it_nome = nome.begin(), i=0;  i!=(meio-1)  ; it_idade++, it_nome++, i++){	//for para somar a primeira posicao do meio
								}	
									
					cout << " - Entre " << *it_nome ; 
					med += *it_idade;		//soamndo
					
				
				tam = peso.size();
				meio = ((tam/2));
				
				idade.sort();
				idade.reverse();
				
				for(it_idade= idade.begin(), it_nome = nome.begin(), i=0; i!=(meio-2)  ; it_idade++, it_nome++, i++){		//for para somar a segunda posicao do meio
				}
				
					cout << " e " << *it_nome; 
					med+= *it_idade;		//soma
					
			
				med/=2;		//divide por 2
				cout << " MEDIANA - " << med;
				cout << endl;
					
				}
					
				if(tam%2!=0){		//Seee for impar
					tam =idade.size();
					meio = ((tam/2));		//metade é so dividir por 2
					for(it_idade= idade.begin(), it_nome = nome.begin(), i=0;  i<meio  ; it_idade++, it_nome++, i++){
					}	
						
									//somar as duas posicoes  do meio
					cout << " MEDIANA -  " <<  *it_idade << " - paciente: " <<*it_nome ; 
					cout << endl;
				}	
				
				break;
					
				case 2:
					altura.sort();
					altura.reverse();
					tam=0, med=0, meio=0;
					
					tam = altura.size();
					if(tam%2==0){
						meio = tam/2;
				
					for(it_altura= altura.begin(), it_nome = nome.begin(), i=0;  i!=meio  ; it_altura++, it_nome++, i++){	//somar as duas posicoes  do meio
					}	
										
						cout << " - Entre " << *it_nome ; 
						med += *it_altura;
						
					
					tam = altura.size();
					meio += ((tam/2)+1);
					
					altura.sort();
					altura.reverse();
					
					for(it_altura= idade.begin(), it_nome = nome.begin(), i=0; i!=	meio  ; it_altura++, it_nome++, i++){
					}
					
						cout << " e " << *it_nome; 
						med+= *it_altura;
						
				
					med/=2;
					cout << " MEDIANA - " << med;
					cout << endl;
						
					}
						
					if(tam%2!=0){
						tam =idade.size();
						meio = ((tam/2));
						for(it_idade= idade.begin(), it_nome = nome.begin(), i=0;  i<meio  ; it_idade++, it_nome++, i++){
						}	
							
										//somar as duas posicoes  do meio
						cout << " MEDIANA -  " <<  *it_altura << " - paciente: " <<*it_nome ; 
						cout << endl;
					
					}
					break;
					
				case 3:	
					peso.sort();
					peso.reverse();
					tam=0, med=0, meio=0;
					
					tam = peso.size();
					if(tam%2==0){
						meio = tam/2;
				
					for(it_peso= peso.begin(), it_nome = nome.begin(), i=0;  i!=meio  ; it_peso++, it_nome++, i++){	//somar as duas posicoes  do meio
					}	
										
						cout << " - Entre " << *it_nome ; 
						med += *it_peso;
						
					
					tam = peso.size();
					meio += ((tam/2)+1);
					
					peso.sort();
					peso.reverse();
					
					for(it_peso= peso.begin(), it_nome = nome.begin(), i=0; i!=	meio  ; it_peso++, it_nome++, i++){
					}
					
						cout << " e " << *it_nome; 
						med+= *it_peso;
						
				
					med/=2;
					cout << " MEDIANA - " << med;
					cout << endl;
						
					}
						
					if(tam%2!=0){
						tam =idade.size();
						meio = ((tam/2));
						for(it_peso= peso.begin(), it_nome = nome.begin(), i=0;  i<meio  ; it_peso++, it_nome++, i++){
						}	
							
										//somar as duas posicoes  do meio
						cout << " MEDIANA -  " <<  *it_peso << " - paciente: " <<*it_nome ; 
						cout << endl;
					
					}
					break;
				case 4:
					imc.sort();
					imc.reverse();
					tam=0, med=0, meio=0;
					
					tam = imc.size();
					if(tam%2==0){
						meio = tam/2;
				
					for(it_imc= imc.begin(), it_nome = nome.begin(), i=0;  i!=meio  ; it_imc++, it_nome++, i++){	//somar as duas posicoes  do meio
					}	
										
						cout << " - Entre " << *it_nome ; 
						med += *it_imc;
						
					
					tam = imc.size();
					meio += ((tam/2)+1);
					
					imc.sort();
					imc.reverse();
					
					for(it_imc= imc.begin(), it_nome = nome.begin(), i=0; i!=	meio  ; it_imc++, it_nome++, i++){
					}
					
						cout << " e " << *it_nome; 
						med+= *it_imc;
						
				
					med/=2;
					cout << " MEDIANA - " << med;
					cout << endl;
						
					}
						
					if(tam%2!=0){
						tam =idade.size();
						meio = ((tam/2));
						for(it_peso= peso.begin(), it_nome = nome.begin(), i=0;  i<meio  ; it_peso++, it_nome++, i++){
						}	
							
										//somar as duas posicoes  do meio
						cout << " MEDIANA -  " <<  *it_peso << " - paciente: " <<*it_nome ; 
						cout << endl;
					
					}
					break;
		
	}
}
	
};

int main(){
	
	nutricionista drikas;  //instanciando
	int aswr;
	while(aswr!=5){		//while simples pro menu
	
	cout << "OPCOES"<< endl;
	cout << "1. Cadastrar" << endl;
	cout << "2. Ver pacientes cadastrados" << endl;
	cout << "3. Comecar atendimentos" << endl;
	cout << "4.Dados para pesquisa "<< endl;
	cin >> aswr;
	
		switch(aswr){   //switch pra chamar metodos
			case 1:
				drikas.cadastro();		
				cout << endl;
				break;
			case 2:
				drikas.mostrar();
				cout << endl;
				break;
			case 3:
				drikas.fila();
				cout << endl;
				break;
			case 4:
				drikas.pesquisa();
				cout << endl;
				break;			
			
		}
	}
	return 0;
}
