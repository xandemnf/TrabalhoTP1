#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Jogo.h"

   int Jogo::getCodIngresso(){
		return codIngresso;
	}

	void Jogo::setCodIngresso(int codIngresso) {
		this->codIngresso = codIngresso;
	}

	int Jogo::getCodJogo(){
		return codJogo;
	}

	void Jogo::setCodJogo(int codJogo) {
		this->codJogo = codJogo;
	}

	date Jogo::getDataInicio(){
		return dataInicio;
	}

	void Jogo::setDataInicio(date dataInicio) {
		this->dataInicio = dataInicio;
	}

	date Jogo::getDataTermino(){
		return dataTermino;
	}

	void Jogo::setDataTermino(date dataTermino) {
		this->dataTermino = dataTermino;
	}

	const string& Jogo::getNome(){
		return nome;
	}

	void Jogo::setNome(const string &nome) {
		this->nome = nome;
	}

	const tipoJogo& Jogo::getTipo(){
		return tipo;
	}

	void Jogo::setTipo(const tipoJogo &tipo) {
		this->tipo = tipo;
	}
