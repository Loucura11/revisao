#include "Pessoa.cpp"
#include<iostream>
using namespace std;


int main() {
 Pessoa p("Nome","Sobrenome", 123456789);

 cout<< "dados da pessoa" << endl;
 cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
 cout << "CPF: " << p.getCPF() << endl;

}