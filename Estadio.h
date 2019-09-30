#ifndef ESTADIO_H
#define ESTADIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;
class Estadio
{
	private:
	int codEstadio;
	string nome;


public:
	int getCodEstadio();

	void setCodEstadio(int codEstadio);

	string getNome();

	void setNome(string nome);


};
#endif
