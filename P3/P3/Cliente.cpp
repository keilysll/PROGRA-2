#include "Cliente.h"

Cliente::Cliente(int ci)
{
	this->ci = ci;
}

Cliente::Cliente(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Cliente::~Cliente()
{
}

int Cliente::getCi()
{
	return ci;
}

bool Cliente::operator==(Cliente* c)
{
	return ci == c->ci;
}

bool Cliente::CmpCi(Cliente* c1, Cliente* c2)
{
	return c1->ci < c2->ci;
}

Lista<Mascota>& Cliente::getMascotas()
{
	return mascotas;
}

string Cliente::toString(Cliente* c)
{
	return c->toString();
}

string Cliente::toString()
{
	mascotas.ordenar(Mascota::CmpNom);
	stringstream ss;
	ss << "{\"ci\":" << ci << ",\"nombre\":\"" << nombre << "\",\"fono\":" << fono << ",\"mascotas\":" << mascotas.toJson(Mascota::toString) << "}";
	return ss.str();
}
