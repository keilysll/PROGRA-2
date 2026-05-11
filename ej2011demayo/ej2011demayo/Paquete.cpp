#include "Paquete.h"

Paquete::Paquete(int cant)
{
	this->cant = cant;
}

Paquete::~Paquete()
{
}

string Paquete::toJson(Paquete* p)
{
	return p->toJson();
}

string Paquete::toJson()
{
	return "{}";
}
