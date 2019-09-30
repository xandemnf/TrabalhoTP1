#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "usuario.h"


void Usuario::cadastrar()
{
}

void Usuario::consultar()
{
}

void Usuario::comprar()
{
}

void Usuario::editar()
{
}

void Usuario::descadastrar()
{
}

void Usuario::alterarEventos()
{
}

void Usuario::excluir()
{
}
    int Usuario::getCodUsuario(){
		return codUsuario;
	}

	void Usuario::setCodUsuario(int codUsuario) {
		this->codUsuario = codUsuario;
	}

	const string& Usuario::getCpf(){
		return cpf;
	}

	void Usuario::setCpf(const string &cpf) {
		this->cpf = cpf;
	}

	const string& Usuario::getSenha(){
		return senha;
	}

	void Usuario::setSenha(const string &senha) {
		this->senha = senha;
	}
