#include "ModMascota.h"

ModMascota::ModMascota()
{
	ind = 0;
	mascotas = new Mascota * [CANT_MAX_MAS];
}

ModMascota::~ModMascota()
{
	delete[]mascotas;
}

void ModMascota::registrar(Mascota* m)
{
	if (ind < CANT_MAX_MAS)
	{
		mascotas[ind] = m;
		ind++;
	}
}

Mascota* ModMascota::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (mascotas[i]->getNombre() == nombre)
		{
			return mascotas[i];
		}
	}
	return NULL;
}

string ModMascota::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << mascotas[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
