#include "Cliente.h"

Cliente::Cliente(int ci, string nombre, int fono):mascota()
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

string Cliente::getNombre()
{
	return nombre;
}

int Cliente::getFono()
{
	return fono;
}

void Cliente::registrar(Mascota* m)
{
	mascota.registrar(m);
}

Mascota* Cliente::bucar(string nombre)
{
	return mascota.buscar(nombre);
}

string Cliente::toJson()
{
	stringstream ss;
	ss << "{\"ci\":" << ci << ",\"nombre\":\"" << nombre << "\",\"fono\":" << fono << ",\"mascotas\":" << mascota.toJson() << "}";
	return ss.str();
}
