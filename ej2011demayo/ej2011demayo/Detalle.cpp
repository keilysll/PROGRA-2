#include "Detalle.h"

Detalle::Detalle(int id, int fecha, int dureacion)
{
	this->id = id;
	this->fecha = fecha;
	this->duracion = duracion;
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
