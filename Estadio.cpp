#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Estadio.h"

    int Estadio::getCodEstadio(){
		return codEstadio;
	}

	void Estadio::setCodEstadio(int codEstadio) {
		this->codEstadio = codEstadio;
	}

	string Estadio::getNome(){
		return nome;
	}

	void Estadio::setNome(string nome) {
		this->nome = nome;
	}
