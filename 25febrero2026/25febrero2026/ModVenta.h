#pragma once
#include"Venta.h"
class ModVenta
{
private:
	Venta** ventas;
	int ind;
	int cantMax;

public:
	ModVenta(int cantMax);

	~ModVenta();
	void registrar(Venta* venta);
	Venta* buscar(int numero);
	void mostrar();
};

