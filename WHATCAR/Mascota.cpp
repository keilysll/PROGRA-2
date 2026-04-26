#include "Mascota.h"

Mascota::Mascota(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

Mascota::Mascota(string nombre)
{
	this->nombre = nombre;
}

Mascota::~Mascota()
{
}

string Mascota::toJson()
{
    stringstream ss;
	ss << "{\"nombre\":\"" << nombre 
		<< "\",\"edad\":" << edad << "}";
    return ss.str();
}

string Mascota::toStatic(Mascota* mascota)
{
	return mascota->toJson();
}

bool Mascota::operator==(Mascota* mascota)
{
	return nombre == mascota->nombre;
}

bool Mascota::comparacionNombre(Mascota* mascota1, Mascota* mascota2)
{
	return mascota1->nombre > mascota2->nombre;
}
