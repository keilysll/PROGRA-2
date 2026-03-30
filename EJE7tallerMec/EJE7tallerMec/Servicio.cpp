
#include "Servicio.h"

Servicio::Servicio(int codigo, string descr, int precio)
{
	this->codigo = codigo;
	this->descr = descr;
	this->precio = precio;


}

Servicio::~Servicio()
{
}

int Servicio::getCod()
{
	return codigo;
}
