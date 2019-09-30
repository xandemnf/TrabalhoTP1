#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "date.h"

using namespace std;

class Partida
{
private:
	int codPartida;

	string nome;

	date data;

	int horario;

	string disponibilidade;

	int quantDisponivel;

	double preco;
public:
	int getCodPartida();

	void setCodPartida(int codPartida);

	date getData();

	void setData(date data);

	const string& getDisponibilidade();

	void setDisponibilidade(const string &disponibilidade);

	int getHorario();

	void setHorario(int horario);

	const string& getNome();

	void setNome(const string &nome);

	double getPreco();

	void setPreco(double preco);

	int getQuantDisponivel();

	void setQuantDisponivel(int quantDisponivel);

};
#endif
