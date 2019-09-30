#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Pagamento.h"

    int Pagamento::getCodPagamento(){
		return codPagamento;
	}

	void Pagamento::setCodPagamento(int codPagamento) {
		this->codPagamento = codPagamento;
	}

	double Pagamento::getPreco(){
		return preco;
	}

	void Pagamento::setPreco(double preco) {
		this->preco = preco;
	}

