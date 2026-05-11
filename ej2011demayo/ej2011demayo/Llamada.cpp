#include "Llamada.h"

Llamada::Llamada(int id, int fecha, int dureacion):Detalle(id,fecha,duracion)
{
	tipo = "llamada";
}

Llamada::~Llamada()
{
}

string Llamada::toJson()
{
	stringstream ss;
	ss << "{\"id\":"<<id<<",\"fecha\":" << fecha << ",\"minutos\":" << duracion << ",\"tipo\":\"" << tipo << "\"}";
	return ss.str();
}
