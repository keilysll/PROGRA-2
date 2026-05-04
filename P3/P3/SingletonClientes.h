#pragma once
#include"Lista.h"
#include"Cliente.h"
class SingletonClientes
{
private:
	Lista<Cliente>clientes;
public:
	~SingletonClientes();
	static SingletonClientes& getInst();
	void registrar(Cliente* c);
	Cliente* buscar(int ci);
	string toString();
private:
	SingletonClientes();

};

