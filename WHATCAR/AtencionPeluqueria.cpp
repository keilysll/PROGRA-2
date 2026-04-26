#include "AtencionPeluqueria.h"

AtencionPeluqueria::AtencionPeluqueria(int codigo, string descripcion, int costo, int duracionEnMinutos)
	:Atencion(codigo, descripcion, costo)
{
	this->duracionEnMinutos = duracionEnMinutos;
}

AtencionPeluqueria::~AtencionPeluqueria()
{
}

int AtencionPeluqueria::getDuracionMinutos()
{
	return duracionEnMinutos;
}

string AtencionPeluqueria::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\"AtencionPeluqueria\",\"codigo\":" << codigo 
		<< ",\"descripcion\":\"" << descripcion
		<< "\",\"costo\":" << costo 
		<< ",\"duracion\":" << duracionEnMinutos << "}";
	return ss.str();
}
