#ifndef JOGO_H
#define JOGO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "tipoJogo.h"
#include "date.h"

using namespace std;
class Jogo
{
private:
	int codJogo;

	string nome;

	tipoJogo tipo;

	date dataInicio;

	date dataTermino;

	int codIngresso;

public:
	int getCodIngresso();

	void setCodIngresso(int codIngresso);

	int getCodJogo();

	void setCodJogo(int codJogo);

	date getDataInicio();

	void setDataInicio(date dataInicio);

	date getDataTermino();

	void setDataTermino(date dataTermino);

	const string& getNome();

	void setNome(const string &nome);

	const tipoJogo& getTipo();

	void setTipo(const tipoJogo &tipo);


};
#endif
