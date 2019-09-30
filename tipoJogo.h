#ifndef TIPO_JOGO_H
#define TIPO_JOGO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class tipoJogo
{
private:
	int codTipo;

	int nome;

public:
	int getCodTipo();

	void setCodTipo(int codTipo);

	int getNome();

	void setNome(int nome);

};
#endif
