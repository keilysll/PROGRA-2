#include "ModObras.h"


ModObras::ModObras()
{
	ind = 0;
	obras = new Obra * [CANT_MAX_OBR];
}

ModObras::~ModObras()
{
	delete[]obras;
}

void ModObras::registrar(Obra* o)
{
	if (ind < CANT_MAX_OBR)
	{
		obras[ind] = o;
		ind++;
	}
}

Obra* ModObras::buscar(string titulo)
{
	for (int i = 0; i < ind; i++)
	{
		if (obras[i]->getTitulo() == titulo)
		{
			return obras[i];
		}
	}
	return	NULL;
}

string ModObras::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << obras[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
