#include "Cliente.h"

Cliente::Cliente(int ci, string nombre,string tipo)
{
	this->nombre = nombre;
	this->ci = ci;
	this->tipo = tipo;
}

Cliente::~Cliente()
{
}

int Cliente::getCi()
{
	return ci;
}
