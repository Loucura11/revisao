#include "Pessoa.cpp"
#include<iostream>
using namespace std;


int main() {
 Pessoa p;
 p.setNome("Nome");
 p.setSobrenome("Sobrenome");
 p.setCPF(123456789);

 cout<< "dados da pessoa" << endl;
 cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
 cout << "CPF: " << p.getCPF() << endl;
 
}