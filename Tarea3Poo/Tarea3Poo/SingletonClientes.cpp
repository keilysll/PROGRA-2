#include "SingletonClientes.h"

SingletonClientes::~SingletonClientes()
{
}

SingletonClientes& SingletonClientes::getInst()
{
	static SingletonClientes inst;
	return inst;
}

SingletonClientes::SingletonClientes():clientes(10)
{
}

void SingletonClientes::registrar(Cliente* c)
{
	clientes.registrar(c);
}

Cliente* SingletonClientes::buscar(int ci)
{
	Cliente cAbuscar(ci);
	Cliente* cEncontrado = clientes.buscar(&cAbuscar);
	return cEncontrado;
}

string SingletonClientes::toString()
{
	clientes.ordenar(Cliente::cmpNombreAs);
	return clientes.toJson(Cliente::toString);
}
