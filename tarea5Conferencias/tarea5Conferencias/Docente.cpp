
#include "Docente.h"

Docente::Docente(string nombre, string especialidad) :Participante(nombre)
{
	this->especialidad = especialidad;
}

Docente::~Docente()
{
}

string Docente::getEsp()
{
	return especialidad;
}

string Docente::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"especialidad\":\"" << especialidad << "\"}";
	return ss.str();
}
