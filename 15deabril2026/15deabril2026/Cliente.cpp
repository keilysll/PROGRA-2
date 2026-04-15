#include "Cliente.h"

Cliente::Cliente(int ci)
	:mascotas(CANT_MAX_MASC)
{
	this->ci = ci;
}

Cliente::Cliente(int ci, string nombre, int fono):mascotas(CANT_MAX_MASC)
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

ListaArray<Mascota>& Cliente::getMascotas()
{
	return mascotas;
}

string Cliente::toString(Cliente* c)
{
	return c->toString();
}

bool Cliente::operator==(Cliente* c)
{
	return ci == c->ci ;
}

bool Cliente::cmpNombreAs(Cliente* c1, Cliente* c2)
{
	return c1->ci < c2->ci;
}

string Cliente::toString()
{
	mascotas.oredenar(Mascota::cmpNombreAs);
	stringstream ss;
	ss << "{\"ci\":" << ci << ",\"nombre\":\"" << nombre << "\",\"fono\":" << fono << ",\"mascotas\":" << mascotas.toJson(Mascota::toString) << "}";
	return ss.str();
}

