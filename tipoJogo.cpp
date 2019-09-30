#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "tipoJogo.h"

    int tipoJogo::getCodTipo(){
		return codTipo;
	}

	void tipoJogo::setCodTipo(int codTipo) {
		this->codTipo = codTipo;
	}

	int tipoJogo::getNome(){
		return nome;
	}

	void tipoJogo::setNome(int nome) {
		this->nome = nome;
	}
