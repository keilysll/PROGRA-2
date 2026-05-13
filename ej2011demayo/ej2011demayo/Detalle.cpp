#include "Detalle.h"

Detalle::Detalle(int id, int fecha)
{
	this->id = id;
	this->fecha = fecha;
}

Detalle::~Detalle()
{
}

string Detalle::toJson(Detalle* d)
{
	return d->toJson();
}

string Detalle::toJson()
{
	return "{}";
}