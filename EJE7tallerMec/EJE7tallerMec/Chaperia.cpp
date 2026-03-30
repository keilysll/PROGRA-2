#include "Chaperia.h"

Chaperia::Chaperia(int codigo, string descr, int precio, string detalle):Servicio(codigo,descr,precio)
{
	tipo = "Chaperia";
	this->detalle = detalle;
}

Chaperia::~Chaperia()
{
}

int Chaperia::getCod()
{
	return codigo;
}

string Chaperia::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":"<<codigo<<",\"descripcion\":\""<<descr<<"\",\"costo\":"<<precio<<",\"detalle\":\""<<detalle<<"\"}";
	return ss.str();
}
