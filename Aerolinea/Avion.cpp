#include "Avion.h"

Avion::Avion(int c, int cap, string m)
{
	this->codigo = c;
	this->capacidad = cap;
	this->modelo=m;
}

Avion::~Avion()
{
}

int Avion::getCod()
{
	return codigo;
}

int Avion::getCap()
{
	return capacidad;
}

string Avion::getMod()
{
	return modelo;
}

string Avion::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"Codigo\":" << codigo << ",";
	ss << "\"Capacidad\":" << capacidad << ",";
	ss << "\"Modelo\":" <<modelo;
	ss << "}";

	return ss.str();
}
