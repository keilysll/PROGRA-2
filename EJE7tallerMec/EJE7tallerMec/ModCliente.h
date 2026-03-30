#pragma once
#include "Cliente.h"
#define CANT_MAX_CLI 10
class ModCliente
{
private:
	int ind;
	Cliente** clientes;
public:
	ModCliente();
	~ModCliente();
	void registrar(Cliente* c);
	Cliente* buscar(int ci);
	void ordenar();
	string toJson();

};

