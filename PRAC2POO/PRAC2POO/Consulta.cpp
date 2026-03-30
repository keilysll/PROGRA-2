#include "Consulta.h"

Consulta::Consulta(int codigo, string descrip, int precio, string doc):Servicio(codigo,descrip,precio)
{
	this->doc = doc;
	tipo = "Consulta";
}

Consulta::~Consulta()
{
}

int Consulta::getCod()
{
	return codigo;
}

string Consulta::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\"" << tipo << "\",\"codigo\":" << codigo << ",\"descripcion\":\"" << descrip << "\",\"costo\":" << precio << ",\"veterinario\":\"" << doc << "\"}";
	return ss.str();
}
