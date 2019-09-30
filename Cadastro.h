#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Cidade.h"

class Cadastro
{
	private:
	int id;
	string nome;
	string login;
	string senha;
	Cidade cidade;

public:
	int getId();
	void setId(int id);

	string getLogin();

	void setLogin(string login);

	string getNome();

	string getSenha();
	void setSenha(string senha);

	Cidade getCidade();

	void setCidade(const Cidade cidade);

	void setNome(const string &nome);
};
#endif
