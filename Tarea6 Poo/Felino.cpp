#include "Felino.h"

Felino::Felino(int codigo, string especie, int edad, int peso):Animal(codigo,especie,edad)
{
	this->peso = peso;
}

Felino::~Felino()
{
}

int Felino::getCod()
{
	return codigo;
}

string Felino::toString()
{
	stringstream ss;
	ss << "{\"Felino\":{\"codigo\":" << codigo<< ",\"especie\":\"" << especie<< "\",\"edad\":" << edad<< "},\"peso\":" << peso << "}";
	return ss.str();
}
