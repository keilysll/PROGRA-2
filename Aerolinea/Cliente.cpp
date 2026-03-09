#include "Cliente.h"

Cliente::Cliente(string n, int c, int t)
{
	this-> nombre = n;
	this->ci = c;
	this->telef = t;
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

int Cliente::getTele()
{
	return telef;
}

string Cliente::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"Nombre\":\"" << nombre << "\",";
	ss << "\"Ci\":" << ci << ",";
	ss << "\"Telefono\":" << telef;
	ss << "}";

	return ss.str();
}
