#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Cadastro.h"
 using namespace std;

    int Cadastro::getId(){
		return id;
	}

	void Cadastro::setId(int id) {
		this->id = id;
	}

	string Cadastro::getLogin(){
		return login;
	}

	void Cadastro::setLogin(string login) {
		this->login = login;
	}

	string Cadastro::getNome(){
		return nome;
	}

	string Cadastro::getSenha(){
		return senha;
	}

	void Cadastro::setSenha(string senha) {
		this->senha = senha;
	}

	Cidade Cadastro::getCidade(){
				return cidade;
	}

	void Cadastro::setCidade(const Cidade cidade) {
				this->cidade = cidade;
	}

	void Cadastro::setNome(const string &nome) {
			this->nome = nome;
	}
