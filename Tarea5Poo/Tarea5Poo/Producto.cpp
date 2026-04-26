#include "Producto.h"

Producto::Producto(string nombre)
{
	this->nombre = nombre;
}

Producto::Producto(string nombre, int precio)
{
	this->nombre = nombre;
	this->precio = precio;
}

Producto::Producto(string nombre, int precio, string descripccion)
{
	this->nombre = nombre;
	this->precio = precio;
	this->descripcion = descripccion;
}

Producto::~Producto()
{
}

string Producto::getNom()
{
	return nombre;
}

string Producto::toJsonP(Producto* p)
{
	return p->toJson();
}

bool Producto::operator==(Producto* p)
{
	return this->nombre == p->getNom();
}

string Producto::toJson()
{
	return"{}";
}

int Producto::getPrecioTotal()
{
	return precio;
}



