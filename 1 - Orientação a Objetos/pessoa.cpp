#include <iostream>
#include "pessoa.hpp"

Pessoa::Pessoa() {
   matricula = 0;
   nome = "";
   cpf = 0;
   telefone = "(00) 0000-0000";
   endereco = "";
}

Pessoa::~Pessoa(){
   cout << "Destrutor da Classe Pessoa" << endl;
} 

int Pessoa::getMatricula() {
   return matricula;
}
void Pessoa::setMatricula(int matricula){
   this->matricula = matricula;
}
string Pessoa::getNome(){
   return nome;
}
void Pessoa::setNome(string nome){
   this->nome = nome;
}
long int Pessoa::getCpf(){
   return cpf;
}
void Pessoa::setCpf(long int cpf){ 
   this->cpf = cpf;
}
string Pessoa::getTelefone(){
   return telefone;
}
void Pessoa::setTelefone(string telefone){
   this->telefone = telefone;
}
string Pessoa::getEndereco(){
   return endereco;
}
void Pessoa::setEndereco(string endereco){
   this->endereco = endereco;
} 

void Pessoa::imprimeDados() {
   cout << getNome() << "\t" << getMatricula() << "\t" << getCpf() << endl; 
}

