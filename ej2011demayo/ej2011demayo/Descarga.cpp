#include "Descarga.h"

Descarga::Descarga(int id, int megas, int fecha):Detalle(id,fecha)
{
	this->megas = megas;
	tipo = "descarga";
}

Descarga::~Descarga()
{
}

string Descarga::toJson()
{
	stringstream ss;
	ss << "{\"id\":"<<id<<",\"fecha\":" << fecha << ",\"tipo\":\"" << tipo<< "\"}";
	return ss.str();
}
