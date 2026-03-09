#pragma once
#include "Vuelo.h"
#include <sstream>
using namespace std;

class ModVuelo
{
private:
	int ind;
	int tam;
	Vuelo** vuelos;

public:
	ModVuelo(int tam);
	~ModVuelo();

	int getInd();
	int getTam();

	void registrar(Vuelo* v);
	Vuelo* buscar(int codigo);

	string toJson();
};