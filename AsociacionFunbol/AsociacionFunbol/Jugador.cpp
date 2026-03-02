#include "Jugador.h"

Jugador::Jugador(int _ci, int _fono, string _nombre)
{
	this->ci = _ci;
	this->fono = _fono;
	this->nombre = _nombre;
}

Jugador::~Jugador()
{
}

int Jugador::getCi()
{
	return ci;
}

int Jugador::getFono()
{
	return fono;
}

string Jugador::getNombre()
{
	return nombre;
}

string Jugador::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"nombre\":\"" << nombre << "\",";
	ss << "\"ci\":" << ci << "\",";
	ss << "\"fono\":" << fono;
	ss << "}";
	return ss.str();
}
