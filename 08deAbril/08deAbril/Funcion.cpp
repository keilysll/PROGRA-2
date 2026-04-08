#include "Funcion.h"

Funcion::Funcion(int id, string nomPeli)
{
	this->id = id;
	this->nomPeli = nomPeli;
}

Funcion::~Funcion()
{
}

int Funcion::getId()
{
	return id;
}
