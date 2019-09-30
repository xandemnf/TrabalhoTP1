#ifndef CIDADE_H
#define CIDADE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;

class Cidade
{
private:
	int codCidade;

	string nome;

public:
	int getCodCidade();

	void setCodCidade(int codCidade);

	const string& getNome();

	void setNome(const string &nome);


};
#endif
