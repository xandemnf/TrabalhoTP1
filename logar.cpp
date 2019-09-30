#include<iostream>
#include "querySQL.h"

using namespace std;

string cpf, senha;

int logar(){
  cout << "\nDigite seu CPF:\n->";
  cin >> cpf;
  cout << "Digite sua Senha:\n->";
  cin >> senha;
  cout << endl;

  return 1;
}
