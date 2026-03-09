#include "ModAtencion.h"

ModAtencion::ModAtencion(int tam)
{
	this->tam = tam;
	ind = 0;
	atenciones = new Atencion * [tam];
}

ModAtencion::~ModAtencion()
{
	delete[]atenciones;
}


void ModAtencion::registrar(Atencion* a)
{
	if (ind < tam)
	{
		atenciones[ind] = a;
		ind++;
	}
	
}

Atencion* ModAtencion::buscar(int fecha)
{
	for (int i = 0; i < ind; i++)
	{
		if (atenciones[i]->getFecha() == fecha)
			return atenciones[i];
	}
	return NULL;
}

void ModAtencion::ordenarAten()
{
	for (int i = 0; i < ind - 1; i++)
	{
		for (int j = 0; j < ind - i - 1; j++)
		{
			if (atenciones[j]->getCodigo() > atenciones[j + 1]->getCodigo())
			{
				Atencion* aux = atenciones[j];
				atenciones[j] = atenciones[j + 1];
				atenciones[j + 1] = aux;
			}
		}
	}
}

string ModAtencion::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << atenciones[i]->toJson();
		if (i < ind - 1)
			ss << "\",";
	}
	ss << "]";
	return ss.str();
}
