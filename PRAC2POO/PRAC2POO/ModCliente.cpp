#include "ModCliente.h"

ModCliente::ModCliente()
{
	ind = 0;
	clientes = new Cliente * [CANT_MAX_CLIEN];
}

ModCliente::~ModCliente()
{
	delete[]clientes;
}

void ModCliente::registrar(Cliente* c)
{
	if (ind < CANT_MAX_CLIEN)
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
		for (int j = 0; j < ind - 1 - i; j++)
		{
			if (clientes[j]->getCi() < clientes[j+1]->getCi())
			{
				Cliente* aux = clientes[j];
				clientes[j] = clientes[j+1];
				clientes[j + 1] = aux;
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
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
