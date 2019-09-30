#ifndef CARTAO_H
#define CARTAO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "date.h"

using namespace std;

class Cartao
{
private:
	int codCartao;

	string numeroCartao;

	int codSeguranca;

	date dataVencimento;

public:
	int getCodCartao();

	void setCodCartao(int codCartao);

	int getCodSeguranca();

	void setCodSeguranca(int codSeguranca);

	date getDataVencimento();

	void setDataVencimento(date dataVencimento);

	const string& getNumeroCartao();

	void setNumeroCartao(const string &numeroCartao);


};
#endif
