#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;

class Usuario
{
private:
	int codUsuario;

	string cpf;

	string senha;


public:
	void cadastrar();

	void consultar();

	void comprar();

	void editar();

	void descadastrar();

	void alterarEventos();

	void excluir();

	int getCodUsuario();

	void setCodUsuario(int codUsuario);

	const string& getCpf();

	void setCpf(const string &cpf);

	const string& getSenha();

	void setSenha(const string &senha);
};
#endif
