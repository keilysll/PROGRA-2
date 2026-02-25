#include "ModProducto.h"

ModProducto::ModProducto(int cantMax)
{
	ind = 0;
	this->cantMax = cantMax;
	productos = new Producto * [cantMax];
}

ModProducto::~ModProducto()
{
	delete[] productos;
}

void ModProducto::registrar(Producto* producto)
{
	if (ind < cantMax)
	{
		productos[ind] = producto;
		ind++
	}
}

Producto* ModProducto::buscar(int codigo)
{
	for(int i = 0 ; i < ind ; i++)
	{
		if (productos[i]->getCodigo() == codigo)
			return productos[i];
	}
	return NULL;
}

void ModProducto::mostrar()
{
	for (int i = 0; i < ind; i++)
		productos[i]->mostrar();
}
