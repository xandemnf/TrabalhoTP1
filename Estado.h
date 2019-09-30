#ifndef ESTADO_H
#define ESTADO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;

class Estado
{
private:
	int codEstado;
	string UF;

public:
	int getCodEstado();

	void setCodEstado(int codEstado);

	const string& getUf();

	void setUf(const string &uf);

};
#endif
