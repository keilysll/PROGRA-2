#pragma once
#include"Cliente.h"
#include"ListaArray.h"
#define CANT_MAX_CLI 10
class SingletonClientes
{
private: 
	ListaArray<Cliente> clientes;
public: 
	~SingletonClientes();
	static SingletonClientes& getInst();
	void registrar(Cliente* c);
	Cliente* buscar(int ci);
	string toString();

private:
	SingletonClientes();
};

