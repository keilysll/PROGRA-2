#include "ModAvion.h"

ModAvion::ModAvion(int tam)
{
	this->tam = tam;
	ind = 0;
	aviones = new Avion * [tam];
}

ModAvion::~ModAvion()
{
	delete[]aviones;
}

int ModAvion::getInd()
{
	return ind;
}

int ModAvion::getTam()
{
	return tam;
}

void ModAvion::registrar(Avion* a)
{
	if (ind < tam)
	{
		aviones[ind] = a;
		ind++;
	}
}

Avion* ModAvion::buscar(int codigo)
{
	for (int i = 0; i < ind; i++)
	{
		if (aviones[i]->getCod() == codigo)
		return aviones[i];
	}
	return NULL;
}

string ModAvion::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << aviones[i]->toJson();
		if (i < ind - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}
