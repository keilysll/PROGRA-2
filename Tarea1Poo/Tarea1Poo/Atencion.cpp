#include "Atencion.h"

Atencion::Atencion(int nro, Mesa* mesas):clientes(10)
{
	this->nro = nro;
	this->mesas = mesas;
}

Atencion::~Atencion()
{
}

int Atencion::getNro()
{
	return nro;
}

string Atencion::toJson()
{
	stringstream ss;
	ss << "{\"numero\":" << nro << ",\"mesa\":" << mesas->toJson() << ",\"clientes\":" << clientes.toJson() << "}";
	return ss.str();
}

bool Atencion::operator<<(Cliente* cliente)
{
	if (!cliente)
	{
		return false;

}
	clientes.registrar(cliente);
	return true;
	
}

Cliente& Atencion::operator[](int posicion)
{
	Cliente* c = clientes.obtener(posicion);
	return *c;
}

int Atencion::getCuenta()

{
	int cuenta = 0;
	for (int i = 0; i < clientes.getInd(); i++)
	{
		Cliente* c = clientes.obtener(i);
		cuenta += c->getCuenta();
	}
	return cuenta;
}
