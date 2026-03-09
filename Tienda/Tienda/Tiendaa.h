#pragma once
#include "ModCliente.h"
#include "ModProducto.h"
#include "ModVenta.h"

class Tiendaa
{
private:
	string nombre;
	ModCliente clientes;
	ModProducto productos;
	ModVenta ventas;

public:
	Tiendaa(string nombre);
	~Tiendaa();

	string getNom();

	ModCliente& getCliente();
	ModProducto& getProd();
	ModVenta& getvet();

	string toJson();
};

