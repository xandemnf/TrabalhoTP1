#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Cartao.h"



   int Cartao::getCodCartao(){
		return codCartao;
	}

	void Cartao::setCodCartao(int codCartao) {
		this->codCartao = codCartao;
	}

	int Cartao::getCodSeguranca(){
		return codSeguranca;
	}

	void Cartao::setCodSeguranca(int codSeguranca) {
		this->codSeguranca = codSeguranca;
	}

	date Cartao::getDataVencimento() {
		return dataVencimento;
	}

	void Cartao::setDataVencimento(date dataVencimento) {
		this->dataVencimento = dataVencimento;
	}

	const string& Cartao::getNumeroCartao(){
		return numeroCartao;
	}

	void Cartao::setNumeroCartao(const string &numeroCartao) {
		this->numeroCartao = numeroCartao;
	}



