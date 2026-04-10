#include "Atencion.h"

Atencion::Atencion(int numero, Mesa* mesa)
{
	this->numero = numero;
}

Atencion::~Atencion()
{
}

bool Atencion::operator<<(Cliente* cliente)
{
	if (!cliente)
	{
		return false;

	}clientes.registrar(cliente);
	return true;
}
