#include "Cliente.h"

Cliente::Cliente(string nom, int ci, int fon)
{
	this->nombre = nom;
	this->ci = ci;
	this->fono = fon;
}

Cliente::~Cliente()
{
}

string Cliente::getNom()
{
	return nombre;
}

int Cliente::getCi()
{
	return ci;
}

int Cliente::getFono()
{
	return fono;
}

string Cliente::toJson()
{
	stringstream ss;

	ss << "{";
	ss << "\"Nombre\":\"" << nombre << "\",";
	ss << "\"Ci\":" << ci << ",";
	ss << "\"Fono\":" << fono;
	ss << "}";

	return ss.str();
}