#include "Cliente.h"

Cliente::Cliente(string nombre)
{
	this->nombre = nombre;
}

Cliente::~Cliente()
{
}

string Cliente::getNombre()
{
	return nombre;
}

string Cliente::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"items\":[]}";
	return ss.str();
}
