#include "Escultor.h"


Escultor::Escultor(string nombre, string material):Artista(nombre)
{
	this->material = material;
}

Escultor::~Escultor()
{
}

string Escultor::getNombre()
{
	return nombre;
}

string Escultor::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"materiales\":\"" << material << "\",\"obras\":"<<obras.toJson()<<"}";
	return ss.str();
}
