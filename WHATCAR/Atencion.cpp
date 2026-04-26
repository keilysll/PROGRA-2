#include "Atencion.h"

Atencion::Atencion(int codigo, string descripcion, int costo)
{
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->costo = costo;
}

Atencion::Atencion(int codigo)
{
	this->codigo = codigo;
}

Atencion::~Atencion()
{
}

int Atencion::getCodigo()
{
	return codigo;
}

string Atencion::getDescripcion()
{
	return descripcion;
}

int Atencion::getCost()
{
	return costo;
}

string Atencion::toJson()
{
	return string();
}

bool Atencion::operator==(Atencion* atencion)
{
	return codigo == atencion->codigo;
}

string Atencion::toStatic(Atencion* atencion)
{
	return atencion->toJson();
}

bool Atencion::comparacionCodigo(Atencion* atencion1, Atencion* atencion2)
{
	return atencion1->codigo > atencion2->codigo;
}
