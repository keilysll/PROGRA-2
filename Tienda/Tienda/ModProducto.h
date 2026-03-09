#pragma once
#include "Producto.h"

class ModProducto
{
private:
	int tam;
	int ind;
	Producto** productos;

public:
	ModProducto(int tam);
	~ModProducto();

	int getTam();
	int getInd();

	void registrar(Producto* p);
	Producto* buscar(int codigo);

	string Json();
};