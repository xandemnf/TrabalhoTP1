#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Ingresso.h"


void Ingresso::atualizar()
{
}
    int Ingresso::getCodIngresso(){
		return codIngresso;
	}

	void Ingresso::setCodIngresso(int codIngresso) {
		this->codIngresso = codIngresso;
	}

	double Ingresso::getPreco(){
		return preco;
	}

	void Ingresso::setPreco(double preco) {
		this->preco = preco;
	}

	int Ingresso::getQuantidade(){
		return quantidade;
	}

	void Ingresso::setQuantidade(int quantidade) {
		this->quantidade = quantidade;
	}

	const tipoJogo& Ingresso::getTipo(){
		return tipo;
	}

	void Ingresso::setTipo(const tipoJogo &tipo) {
		this->tipo = tipo;
	}
