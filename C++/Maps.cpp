#include <iostream>
#include <windows.h>

using namespace std;


int main() {
	
   string from = "Aguas+Claras+Brasilia+DF/";
   string to = "Asa+Norte+Brasilia+DF/";
   string open_url = "https://www.google.com.br/maps/dir/";
   string q = open_url+from+to;
   //system(q.c_str());
   
   ShellExecute (0, "open", q.c_str(), NULL , NULL, 1);
   
   //std::cout << "MapView" << std::endl;
   //const char* from = "Asa+Sul,+Brasilia+-+Federal+District,+70297-400/";
   //const char* from = "Aguas+Claras+Brasilia+DF/";
   //const char* to = "North+Wing,+Brasilia+-+Federal+District,+70297-400/";
   //const char* to = "Asa+Norte+Brasilia+DF/";
   //const char* open_url = "open https://www.google.com.br/maps/dir/";
   //char* q = new char[1024];
   //strcat(q, open_url);
   //strcat(q, from);
   //strcat(q, to);
   //strcat(q, "@-15.7925468,-47.911615,14z/data=!3m1!4b1!4m14!4m13!1m5!1m1!1s0x935a3ac9f5dc25bd:0xb3f9fcf19595135c!2m2!1d-47.8945011!2d-15.8114166!1m5!1m1!1s0x935a3a5234fcfd1f:0x8eff4eece5843e21!2m2!1d-47.8829416!2d-15.7662824!3e0");
   //strcat(q, "/data=!3m1!4b1!4m14!4m13!1m5!1m1!1s0x935a3ac9f5dc25bd:0xb3f9fcf19595135c!2m2!1d-47.8945011!2d-15.8114166!1m5!1m1!1s0x935a3a5234fcfd1f:0x8eff4eece5843e21!2m2!1d-47.8829416!2d-15.7662824!3e0");
  // system(q);
   //system("open https://www.google.com.br/maps/dir/%C3%81guas+Claras+Bras%C3%ADlia+DF/Asa+Norte+Bras%C3%ADlia+DF");
   return 0;
}
