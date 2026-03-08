#pragma once
#include "Venta.h"

class ModVenta
{
private:
	int ind;
	int tam;
	Venta** ventas;

public:
	ModVenta(int tam);
	~ModVenta();

	int getInd();
	int getTam();

	void registrar(Venta* v);
	Venta* buscar(int id);

	string toJson();
};
