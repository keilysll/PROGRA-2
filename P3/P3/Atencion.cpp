#include "Atencion.h"

Atencion::Atencion(int cod)
{
	this->cod = cod;
}

Atencion::Atencion(int cod, string desc, int precio)
{
	this->cod = cod;
	this->desc = desc;
	this->precio = precio;
}

Atencion::~Atencion()
{
}

string Atencion::toString()
{
	return "{}";
}

bool Atencion::CmpCod(Atencion* a1, Atencion* a2)
{
	return a1->cod > a2->cod;
}

bool Atencion::operator==(Atencion* a)
{
	return cod == a->cod;
}

string Atencion::toString(Atencion* a)
{
	return a->toString();
}
