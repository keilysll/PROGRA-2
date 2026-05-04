#include "Socio.h"

Socio::Socio(int ci)
{
	this->ci = ci;
}

Socio::Socio(int ci, string nombre, string email)
{
	this->ci = ci;
	this->nombre = nombre;
	this->email = email;
}

Socio::~Socio()
{
}

int Socio::getCi()
{
	return ci;
}

string Socio::toString(Socio* s)
{
	return s->toString();
}

bool Socio::operator==(Socio* s)
{
	return ci == s->ci ;
}

bool Socio::CompNom(Socio* s1, Socio* s2)
{
	return s1->nombre > s2->nombre;
}

string Socio::toString()
{
	stringstream ss;
	ss << "{\"ci\":"<<ci<<",\"nombre\":\"" << nombre << "\",\"email\":\"" << email << "\"}";
	return ss.str();
}
