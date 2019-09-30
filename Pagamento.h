#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Pagamento
{
	private:
	int codPagamento;

	double preco;

public:
	int getCodPagamento();

	void setCodPagamento(int codPagamento);

	double getPreco();

	void setPreco(double preco);


};
#endif
