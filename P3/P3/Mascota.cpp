#include "Mascota.h"

Mascota::Mascota(string nombre)
{
	this->nombre = nombre;
}

Mascota::Mascota(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

Mascota::~Mascota()
{
}

string Mascota::toString(Mascota* m)
{
	return m->toString();
}

bool Mascota::CmpNom(Mascota* m1, Mascota* m2)
{
	return m1->nombre > m2->nombre;
}

bool Mascota::operator==(Mascota* m)
{
	return nombre==m->nombre;
}

string Mascota::toString()
{
	stringstream ss;
	ss << "{\"nombre\":\""<<nombre<<"\",\"edad\":" << edad << "}";
	return ss.str();
}
