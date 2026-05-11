#include "PaqueteMegas.h"

PaqueteMegas::PaqueteMegas(int cant) :Paquete(cant)
{
	tipo = "megas";
}

PaqueteMegas::~PaqueteMegas()
{
}

string PaqueteMegas::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"saldo megas\":2" << cant << "}";
	return ss.str();
}
