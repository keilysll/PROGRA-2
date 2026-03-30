#include "ModServicio.h"



ModServicio::ModServicio()
{
	ind = 0;
	servicios = new Servicio * [CANT_MAX_SER];
}

ModServicio::~ModServicio()
{
	delete[]servicios;
}

void ModServicio::registrar(Servicio* s)
{
	if (ind < CANT_MAX_SER)
	{
		servicios[ind] = s;
		ind++;
	}
}

Servicio* ModServicio::buscar(int codigo)
{
	for (int i = 0; i < ind; i++)
	{
		if (servicios[i]->getCod() == codigo)
		{
			return servicios[i];
		}
	}
	return NULL;
}

string ModServicio::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << servicios[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
