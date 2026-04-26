#pragma once
#include "Cliente.h"
#include "ModGen.h"
class SingletonClientes
{
private:
	ModGen<Cliente> clientes;
public:
	~SingletonClientes();
	static SingletonClientes& getInst();
	ModGen<Cliente>& getClientes();
	void registrar(Cliente* cliente);
	Cliente* buscar(int ci);
	string toString();
private:
	SingletonClientes();
};

