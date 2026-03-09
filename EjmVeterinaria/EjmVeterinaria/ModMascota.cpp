#include "ModMascota.h"

ModMascota::ModMascota(int tam)
{
	this->tam = tam;
	ind = 0;
	mascotas = new Mascota * [tam];
}

ModMascota::~ModMascota()
{
	delete[]mascotas;
}

void ModMascota::registrarMascota(Mascota* m)
{
	if (ind < tam)
	{
		mascotas[ind] = m;
		ind++;
	}
}

Mascota* ModMascota::buscarMascota(string nombre)
{
	for (int i = 0; i < ind; i++) {
		if (mascotas[i]->getNombre() == nombre) {
			return mascotas[i];
		}
	}
	return nullptr;
}


int ModMascota::getInd()
{
	return ind;
}

void ModMascota::OrdenarMascota()
{
	for (int i = 0; i < ind - 1; i++)
	{
		for (int j = 0; j < ind - i - 1; j++)
		{
			if (mascotas[j]->getNombre() > mascotas[j + 1]->getNombre())
			{
				Mascota* aux = mascotas[j];
				mascotas[j] = mascotas[j + 1];
				mascotas[j + 1] = aux;
			}
		}
	}
}

string ModMascota::toJson()
{
	stringstream ss;
	ss << "[";

	for (int i = 0; i < ind; i++)
	{
		ss << mascotas[i]->toJson();
		if (i < ind - 1)
			ss << ",";
	}

	ss << "]";
	return ss.str();
}




