#include "Asociacion.h"



Asociacion::Asociacion(string nom):jugadores(CANT_MAX_JUG)
{
	this->nombre = nom;
}

Asociacion::~Asociacion()
{
}

ModJugador& Asociacion::getJugador()
{
	return jugadores;
}

string Asociacion::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"nombre\":\"" << nombre <<  "\",";
	ss << "\"jugadores\":" << jugadores.toJson ();
	ss << "}";
		return ss.str();
}

void Asociacion::mostrar()
{
}
