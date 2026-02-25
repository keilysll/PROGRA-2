#include "Producto.h"

Producto::Producto(int codigo, string nombre, int precio)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->precio = precio;
}

Producto::~Producto()
{
}

int Producto::getCodigo()
{
	return codigo;
}

string Producto::getNombre()
{
	return nombre;
}

int Producto::getPrecio()
{
	return precio;
}

void Producto::mostrar()
{
	cout << "codigo: " << codigo << " nombre: " << nombre << "precio: " << precio << endl;
}





