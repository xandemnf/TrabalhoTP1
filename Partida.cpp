#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Partida.h"

   int Partida::getCodPartida(){
		return codPartida;
	}

	void Partida::setCodPartida(int codPartida) {
		this->codPartida = codPartida;
	}

	date Partida::getData(){
		return data;
	}

	void Partida::setData(date data) {
		this->data = data;
	}

	const string& Partida::getDisponibilidade(){
		return disponibilidade;
	}

	void Partida::setDisponibilidade(const string &disponibilidade) {
		this->disponibilidade = disponibilidade;
	}

	int Partida::getHorario(){
		return horario;
	}

	void Partida::setHorario(int horario) {
		this->horario = horario;
	}

	const string& Partida::getNome(){
		return nome;
	}

	void Partida::setNome(const string &nome) {
		this->nome = nome;
	}

	double Partida::getPreco(){
		return preco;
	}

	void Partida::setPreco(double preco) {
		this->preco = preco;
	}

	int Partida::getQuantDisponivel(){
		return quantDisponivel;
	}

	void Partida::setQuantDisponivel(int quantDisponivel) {
		this->quantDisponivel = quantDisponivel;
	}


