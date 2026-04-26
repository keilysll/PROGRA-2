#include "SingletonClientes.h"

SingletonClientes::SingletonClientes()
{
}

SingletonClientes::~SingletonClientes()
{
}

SingletonClientes& SingletonClientes::getInst()
{
	static SingletonClientes instancia;
	return instancia;
}

ModGen<Cliente>& SingletonClientes::getClientes()
{
	return clientes;
}

void SingletonClientes::registrar(Cliente* cliente)
{
	clientes.registrar(cliente);
}

Cliente* SingletonClientes::buscar(int ci)
{
	Cliente* cliente = new Cliente(ci);
	return clientes.buscar(cliente);
}

string SingletonClientes::toString()
{
	stringstream ss;
	clientes.ordenar(Cliente::comparacionCi);
	ss << clientes.toJson(Cliente::toStatic);
	return ss.str();
}
