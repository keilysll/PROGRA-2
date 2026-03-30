#include "Servicio.h"

Servicio::Servicio(int codigo, string descrip, int precio)
{
	this->codigo = codigo;
	this->descrip = descrip;
	this->precio = precio;
}

Servicio::~Servicio()
{
}

int Servicio::getCod()
{
	return codigo;
}
