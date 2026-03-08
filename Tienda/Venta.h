#pragma once
#include "ModProducto.h"
#include "Cliente.h"

#define CANT_MAXPRODUC_ENVENTA 5

class Venta
{
private:
	int id;
	int fecha;
	Cliente* cliente;
	ModProducto productos;

public:
	Venta(int id, int fecha, Cliente* c);
	~Venta();

	int getFech();
	int getId();

	ModProducto& getProductos();

	string toJson();
};
