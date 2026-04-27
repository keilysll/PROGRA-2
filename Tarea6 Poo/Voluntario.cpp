#include "Voluntario.h"

Voluntario::Voluntario(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Voluntario::~Voluntario()
{
}

int Voluntario::getCi()
{
	return ci;
}

bool Voluntario::cmpCi(Voluntario* a, Voluntario* b)
{
	return a->ci < b->ci;
}

string Voluntario::toString(Voluntario* v)
{
	return v->toString();
}
