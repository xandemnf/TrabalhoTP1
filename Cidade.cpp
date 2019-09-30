#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Cidade.h"

    int Cidade::getCodCidade(){
		return codCidade;
	}

	void Cidade::setCodCidade(int codCidade) {
		this->codCidade = codCidade;
	}

	const string& Cidade::getNome(){
		return nome;
	}

	void Cidade::setNome(const string &nome) {
		this->nome = nome;
	}
