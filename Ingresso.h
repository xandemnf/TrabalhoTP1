#ifndef INGRESSO_H
#define INGRESSO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "tipoJogo.h"

class Ingresso
{
private:
	int codIngresso;

	tipoJogo tipo;

	int quantidade;

	double preco;


public:
	void atualizar();

	int getCodIngresso();

	void setCodIngresso(int codIngresso);

	double getPreco();

	void setPreco(double preco);

	int getQuantidade();

	void setQuantidade(int quantidade);

	const tipoJogo& getTipo();

	void setTipo(const tipoJogo &tipo);
};
#endif
