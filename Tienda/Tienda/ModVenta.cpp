#include "ModVenta.h"

ModVenta::ModVenta(int tam)
{
	this->tam = tam;
	ind = 0;
	ventas = new Venta * [tam];
}

ModVenta::~ModVenta()
{
	delete[] ventas;
}

int ModVenta::getInd()
{
	return ind;
}

int ModVenta::getTam()
{
	return tam;
}

void ModVenta::registrar(Venta* v)
{
	if (ind < tam)
	{
		ventas[ind] = v;
		ind++;
	}
}

Venta* ModVenta::buscar(int id)
{
	for (int i = 0; i < ind; i++)
	{
		if (ventas[i]->getId() == id)
			return ventas[i];
	}
	return NULL;
}

string ModVenta::toJson()
{
	stringstream ss;

	ss << "[";

	for (int i = 0; i < ind; i++)
	{
		ss << ventas[i]->toJson();

		if (i < ind - 1)
			ss << ",";
	}

	ss << "]";

	return ss.str();
}
