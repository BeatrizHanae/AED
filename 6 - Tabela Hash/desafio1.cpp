#include <iostream>
#include <vector>

using namespace std;

class Usuarios{
	public:
		Usuarios();
		~Usuarios();
	
	vector <int> senhas;
	
	
	char FuncaoHash(int senha){
		char hex[10];
		int i = 0;
		int n;
		while(n!=0){
			int temp = 0;
			temp = n%16;
				if (temp < 10){
					hex[i] = temp + 48;
					i++;
				} else {
					hex[i] = temp + 55;
					i++;
				}
			n = n/16;
		}
	return hex;
	}


};
	
int main(){
	int senha, cadastro, opc;
	string s;
	Usuario user;
	
	cout << "Bem vindo ao Banco UnB, gostaria de realizar o cadastro? (Responda com um S)" << endl;
	cin >> s;
	
	if (s == 'S' || s == 's'){
		cout << "Insira o login." << endl;
		cin >> cadastro;
		
		cout << "Insira a senha." << endl;
		cin >> senha;
		
		user.FuncaoHash(senha);
	}
	cout << user <<< endl;
	
	
	
	
	
	
	
	
	return 0;
}
