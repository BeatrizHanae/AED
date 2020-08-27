#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Geometria {

	public:
		int medida;
	
	void setMedida(int m){
		medida = m;
	}
	int getMedida(){
		return medida;
	}
	

	protected : 
	void setArea_circulo(int medida){
				int area_c;
				area_c = medida;
	}
	
};

class circunferencia: public Geometria{
	int raio;
	float comprimentoC, areaC;
	
	private: 
	
	void setcomprimento_circunferencia(int r){
					comprimentoC = medida*2*M_PI;
			}
	int getComprimento(){
		return comprimentoC;
	}

};

class cubo: public Geometria{
	public:
	float a,areal, areat, volume;
	
		void area_lateral(){
			areal= 4*pow(a,2);
		}
		void area_total(){
			areat = 6*pow(a,2);
		}
		void volume(){
			volume = pow(a,3);
		}
};
int main (){
	circunferencia circulo1;
	cubo cubo1;
	int raio, larg, i, opcao;
	
	
	while(true){
		cout << "Qual a forma geométrica que deseja operar?" << endl;
		cout << "1 - Cirucunferencia." << endl;
		cout << "2 - Cubo." << endl;
		cout << "3 - Os dois." << endl;
		cout << "4 - Sair." << endl;
		cin >> opcao;
			switch (opcao){
				case 1:{
					cout << "Digite o raio da circunferência: " << endl;
					cin >> raio;
					
					circulo
					break;
				}
			}
	}
	
	
}
