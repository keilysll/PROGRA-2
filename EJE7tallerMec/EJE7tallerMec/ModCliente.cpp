#include "ModCliente.h"

ModCliente::ModCliente()
{
	clientes = new Cliente * [CANT_MAX_CLI];
	ind = 0;
}

ModCliente::~ModCliente()
{
	delete[] clientes;
}

void ModCliente::registrar(Cliente* c)
{
	if (ind < CANT_MAX_VEH)
	{
		clientes[ind] = c;
		ind++;
	}
}

Cliente* ModCliente::buscar(int ci)
{
	for (int i = 0; i < ind; i++)
	{
		if (clientes[i]->getCi() == ci)
		{
			return clientes[i];
		}
	}
	return NULL;
}

void ModCliente::ordenar()
{
	for (int i = 0; i < ind - 1; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			if (clientes[i]->getNombre() > clientes[j]->getNombre())
			{
				Cliente* aux = clientes[i];
				clientes[i] = clientes[j];
				clientes[j] = aux;
			}
		}
	}
}

string ModCliente::toJson()
{
	stringstream ss;
	ordenar();
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << clientes[i]->toJson();
		if (i < ind - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}
