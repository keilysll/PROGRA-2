#include "Mantenimiento.h"

Mantenimiento::Mantenimiento(int codigo, string descr, int precio, int km):Servicio(codigo,descr,precio)
{
	this->km = km;
	tipo = "Mantenimiento";
}

Mantenimiento::~Mantenimiento()
{
}

int Mantenimiento::getCod()
{
	return codigo;
}

string Mantenimiento::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":"<<codigo<<",\"descripcion\":\""<<descr<<"\",\"costo\":"<<precio<<",\"kilometros\":\""<<km<<"\"}";
	return ss.str();
}
