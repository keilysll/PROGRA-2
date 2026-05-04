#include "SingletonClientes.h"
SingletonClientes::SingletonClientes()
{
}

SingletonClientes::~SingletonClientes()
{
}

SingletonClientes& SingletonClientes::getInst()
{
	static SingletonClientes inst;
	return inst;
}

void SingletonClientes::registrar(Cliente* c)
{
	clientes.registrar(c);
}

Cliente* SingletonClientes::buscar(int ci)
{
	Cliente BusCi(ci);
	Cliente* encontrado = clientes.buscar(&BusCi);
	return encontrado;
}

string SingletonClientes::toString()
{
	clientes.ordenar(Cliente::CmpCi);
	return clientes.toJson(Cliente::toString);
}
