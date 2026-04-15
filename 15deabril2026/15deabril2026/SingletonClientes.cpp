#include "SingletonClientes.h"
SingletonClientes::SingletonClientes():clientes(CANT_MAX_CLI)
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
	Cliente cAbuscar(ci);
	Cliente* cEncontrado = clientes.buscar(&cAbuscar);
	return cEncontrado;
	
}

string SingletonClientes::toString()
{
	clientes.oredenar(Cliente::cmpNombreAs);
	return clientes.toJson(Cliente::toString);
}
