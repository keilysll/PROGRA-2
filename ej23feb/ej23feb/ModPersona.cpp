#include "ModPersona.h"

ModPersona::ModPersona(int cantMax)
{
	ind = 0;
	this->cantMax = cantMax;
	personas = new Persona * [cantMax];

}

ModPersona::~ModPersona()
{
	delete 
}

int ModPersona::getCantMax()
{
	return cantMax;
}

int ModPersona::getCantActual()
{
	return ind;
}

void ModPersona::registrar(Persona* p)
{
	if (ind < cantMax)
	{
		personas[ind] = p;
		ind++;
	}
}

Persona* ModPersona::buscar(int ci)
{
	for (int i = 0;i < ind; i++)
	{
		if (personas[i]->getCi() == ci)
			return peronas[i];

	}

	return NULL;
}

void ModPersona::mostrar()
{
	for (int i = 0; i < ind; i++)
		personas[i]->mostrar();
}





