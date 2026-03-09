#include "ModProducto.h"

ModProducto::ModProducto(int tam)
{
	this->tam = tam;
	ind = 0;
	productos = new Producto * [tam];
}

ModProducto::~ModProducto()
{
	delete[] productos;
}

int ModProducto::getTam()
{
	return tam;
}

int ModProducto::getInd()
{
	return ind;
}

void ModProducto::registrar(Producto* p)
{
	if (ind < tam)
	{
		productos[ind] = p;
		ind++;
	}
}

Producto* ModProducto::buscar(int codigo)
{
	for (int i = 0; i < ind; i++)
	{
		if (productos[i]->getCod() == codigo)
			return productos[i];
	}
	return NULL;
}

string ModProducto::Json()
{
	stringstream ss;

	ss << "[";

	for (int i = 0; i < ind; i++)
	{
		ss << productos[i]->toJson();

		if (i < ind - 1)
			ss << ",";
	}

	ss << "]";

	return ss.str();
}