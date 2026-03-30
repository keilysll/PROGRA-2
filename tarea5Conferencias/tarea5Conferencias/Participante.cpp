#include "Participante.h"

Participante::Participante(string nombre)
{
	this->nombre = nombre;
}

Participante::~Participante()
{
}

string Participante::getNombre()
{
	return nombre;
}
