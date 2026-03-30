#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string carrera):Participante(nombre)
{
	this->carrera = carrera;
}

Estudiante::~Estudiante()
{
}

string Estudiante::getCarrera()
{
	return carrera;
}

string Estudiante::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"carrera\":\"" << carrera << "\"}";
	return ss.str();
}
