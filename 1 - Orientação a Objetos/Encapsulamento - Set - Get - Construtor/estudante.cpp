#include <iostream>
#define TAM 5

using namespace std;
//declaracao da classe
class Ficha {
  int matricula;
  float media;
public:
  Ficha(){ //construtor padrao - sem parametros
    matricula = 0;
    media = 0;
  }
  //imprime resultado do aluno
  void imprime(){
    cout  << "Aluno " << matricula
          << " Tirou media " << media
          << endl;
  }
  void setMatricula(int m){
    matricula = m;
  }
  void setMedia(float m){
    media = m;
  }
};


int main (){

  Ficha fichasturma[TAM]; //instanciando a classe
  int i, matr; //variáveis local
  float nota; //variavel local

  for (i = 0; i < TAM; i++) {
    cout << "Digite a matricula do " << i+1 << "o aluno: ";
    cin >> matr;

    cout << "Digite a media do " << i+1 << "o aluno: ";
    cin >> nota;

    fichasturma[i].setMatricula(matr); //criando vários objetos de matricula
    fichasturma[i].setMedia(nota); //criando varios objetos de nota
  }

  for (i = 0; i < TAM; i++) {
     fichasturma[i].imprime(); // imprimindo os objetos criados
     
     
  }

  return 0;
}
