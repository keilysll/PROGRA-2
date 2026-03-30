#include "ModArtista.h"

ModArtista::ModArtista()
{
	ind = 0;
	artistas = new Artista * [CANT_MAX_ART];
}

ModArtista::~ModArtista()
{
	delete[]artistas;
}

void ModArtista::registrar(Artista* a)
{
	if (ind < CANT_MAX_ART)
	{
		artistas[ind] = a;
		ind++;
	}
}

Artista* ModArtista::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (artistas[i]->getNombre() == nombre)
		{
			return artistas[i];
		}
	}
	return	NULL;
}

string ModArtista::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << artistas[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
