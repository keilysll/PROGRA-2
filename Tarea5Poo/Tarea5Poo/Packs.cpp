#include "Packs.h"

Packs::Packs(string nombre, int precio, Producto* i, Producto* t, Producto* tel):Producto(nombre,precio)
{
	this->internet = i;
	this->tv = t;
	this->telefonia = tel;
	
}
Packs::~Packs()
{
}

string Packs::getNom()
{
	return nombre;
}

