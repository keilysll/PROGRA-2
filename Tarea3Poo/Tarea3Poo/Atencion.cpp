#include "Atencion.h"

Atencion::Atencion(int codigo)
{
	this->codigo = codigo;
}

Atencion::Atencion(int codigo, string descrip, int precio)
{
	this->codigo = codigo;
	this->descrip = descrip;
	this->precio = precio;
}

Atencion::~Atencion()
{
}

int Atencion::getCod()
{
	return codigo;
}

string Atencion::toString()
{
	return "{}";
}

string Atencion::toString(Atencion* a)
{
	return a->toString();
}

bool Atencion::operator==(Atencion* a)
{
	return this->codigo == a->codigo;
}

bool Atencion::cmpCodigoAsc(Atencion* a1, Atencion* a2)
{
	return a1->codigo > a2->codigo ;
}
