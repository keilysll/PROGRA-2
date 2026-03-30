#include "ModParticipante.h"

ModParticipante::ModParticipante()
{
	ind = 0;
	participantes = new Participante * [CANT_MAX];
}

ModParticipante::~ModParticipante()
{
	delete[] participantes;
}

void ModParticipante::registrar(Participante* p)
{
	if (ind < CANT_MAX)
	{
		participantes[ind] = p;
		ind++;
	}
}

Participante* ModParticipante::buscarNom(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (participantes[i]->getNombre() == nombre)
			return participantes[i];
	}
	return NULL;
}

string ModParticipante::toJson()
{
	stringstream ss;
	ss<<"[";
	for (int i = 0; i < ind; i++)
	{
		ss<<participantes[i]->toJson();
		if (i < ind - 1)
			ss << ",";

	}
	ss << "]";
	return ss.str();
}
