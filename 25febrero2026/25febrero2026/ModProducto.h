#pragma once
#include"Producto.h"
class ModProducto
{
private:
	Producto** productos;
	int ind;
	int cantMax;
public:
	ModProducto(int cantMax);

	~ModProducto();
	void registrar(Producto* producto);
	Producto* buscar(int codigo);
	void mostrar();
};

