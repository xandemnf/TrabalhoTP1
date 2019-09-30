#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Estado.h"

    int Estado::getCodEstado(){
		return codEstado;
	}

	void Estado::setCodEstado(int codEstado) {
		this->codEstado = codEstado;
	}

	const string& Estado::getUf(){
		return UF;
	}

	void Estado::setUf(const string &uf) {
		UF = uf;
	}
