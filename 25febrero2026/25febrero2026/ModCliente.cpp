#include "ModCliente.h"

ModCliente::ModCliente(int cantMax)
{
	ind = 0;
	this->cantMax = cantMax;
	clientes = new cliente * [cantMax];
}

ModCliente::~ModCliente()
{
	delete[] clientes;
}

int ModCliente::getCantMax()
{
	return cantMax;
}

int ModCliente::getCantActual()
{
	return id;
}

void ModCliente::registrar(cliente* cliente)
{
	if (ind < cantMax)
	{
		clientes[ind] = cliente;
		ind++;
	}
}

cliente* ModCliente::buscar(int ci)
{
	for (int i = 0; i < ind; i++)
	{
		if (clientes[i]->getCi() == ci)
			return clientes[i];

	}

	return NULL;
}

void ModCliente::mostrar()
{
	for (int i = 0; i < ind; i++)
		clientes[i]->mostrar();

}


