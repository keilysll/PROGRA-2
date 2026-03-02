#include "ModCliente.h"

ModCliente::ModCliente(int tam)
{
	this->tam = tam;
	ind = 0;
	personas = new Cliente * [tam];
}

ModCliente::~ModCliente()
{
	for (int i = 0; i < ind; i++)
	{
		delete personas[i];
	}
	delete[] personas;
}

void ModCliente::registrarCliente(Cliente* p)
{
	if (ind < tam)
	{
		personas[ind] = p;
		ind++;
	}
}

Cliente* ModCliente::buscarCliente(string nombre)
{
	
		for (int i = 0; i < ind; i++)
		{
			if (personas[i]->getNombre() == nombre)
			{
				return personas[i];
			}
		}
		return nullptr;

}



void ModCliente::mostrarCliente()
{
	for (int i = 0; i < ind; i++) {
		personas[i]->mostrarCliente();
	}
}
