#include "ModMascota.h"

ModMascota::ModMascota(int tam)
{
	this->tam = tam;
	ind = 0;
	mascotas = new Mascota * [tam];
}

ModMascota::~ModMascota()
{
	for (int i = 0; i < ind; i++)
	{
		delete mascotas [i];
	}
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

void ModMascota::mostrarMascota()
{
	for (int i = 0; i < ind; i++)
	{
		mascotas[i]->mostrar();

	}
}

int ModMascota::getInd()
{
	return ind;
}
