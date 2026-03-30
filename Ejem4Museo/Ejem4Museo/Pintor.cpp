#include "Pintor.h"

Pintor::Pintor(string nombre, string especialidad):Artista(nombre)
{
	this->especialidad = especialidad;
}

Pintor::~Pintor()
{
}

string Pintor::getNombre()
{
	return nombre;
}

string Pintor::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"especialidad\":\"" << especialidad << "\",\"obras\":"<<obras.toJson()<<"}";
	return ss.str();
}
