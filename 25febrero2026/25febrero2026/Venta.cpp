#include "Venta.h"

Venta::Venta(int numero, cliente* clientes) : productos(CANT_MAX_PR_EN_VENTA 10)

{
	this->numero = numero;
	this->clientes = clientes;
}

Venta::~Venta()
{
}

int Venta::getNumero()
{
	return numero;
}

ModProducto& Venta::getProductos()
{
	return productos; 
}

void Venta::mostrar()
{
	cout << "Venta: " << numero << endl;
	cout << "Productos:"<< productos << endl;
	productos.mostrar();
}
 