#include "Ave.h"

Ave::Ave(int codigo, string especie, int edad, bool vuelo):Animal(codigo,especie,edad)
{
	this->vuelo = vuelo;
}

Ave::~Ave()
{
}

int Ave::getCod()
{
	return codigo;
}

string Ave::toString()
{
	stringstream ss;
	ss << "{\"Ave\":{\"codigo\":" << codigo<< ",\"especie\":\"" << especie<< "\",\"edad\":" << edad<< "},\"tipo\":" << (vuelo ? "\"aerea\"" : "\"terrestre\"") << "}";
	return ss.str();
}
