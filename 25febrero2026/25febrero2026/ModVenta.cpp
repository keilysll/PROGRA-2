#include "ModVenta.h"

ModVenta::ModVenta(int cantMax)
{
	ind = 0;
	this->cantMax = cantMax;
	ventas = new Venta * [cantMax];
}

ModVenta::~ModVenta()
{
	delete[] ventas;
}

void ModVenta::registrar(Venta* venta)
{
	if (iind < cantMax)
	{
		ventas[ind] = venta;
		ind++
	}
}

Venta* ModVenta::buscar(int numero)
{
	for (int i = 0; i < ind; i++)
	{
		if (ventas[i]->getNumero() == numero)
			return ventas[i];
	}
	return NULL;
}

void ModVenta::mostrar()
{
	for (int i = 0; i < ind; i++)
		ventas[i]->mostrar();
}
