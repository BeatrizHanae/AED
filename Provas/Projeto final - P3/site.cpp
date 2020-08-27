#include <iostream>
#include <windows.h>

using namespace std;

void Pagina(){
	char site[100];
	cout << "Siga o exemplo para digitar o site http://google.com\n";
	
	cin >> site;
	system ("open https://www.google.com.br/maps/dir/Asa+Norte,+Bras%C3%ADlia+-+DF/UnB+Universidade+de+Bras%C3%ADlia+-+Bras%C3%ADlia,+DF,+70910-900/@-15.7775822,-47.8955272,14z/data=!4m14!4m13!1m5!1m1!1s0x935a3a5234fcfd1f:0x8eff4eece5843e21!2m2!1d-47.8829416!2d-15.7662824!1m5!1m1!1s0x935a398265a2d027:0x9431d651ab4c1104!2m2!1d-47.8706311!2d-15.7631573!5i2!5m1!1e1");
//	ShellExecute(0, "open", site, NULL, NULL, 1);
	
}

int main(){
	Pagina();
	return 0;
}
