
#include "Mascota.h"

Mascota::Mascota(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

Mascota::~Mascota()
{
}

string Mascota::getNombre()
{
	return nombre;
}

string Mascota::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"edad\":" << edad << "}";
	return ss.str();
}
