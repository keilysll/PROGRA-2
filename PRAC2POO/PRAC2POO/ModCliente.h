#pragma once
#include"Cliente.h"
#define CANT_MAX_CLIEN 10
class ModCliente
{
private:
	Cliente** clientes;
	int ind;
public:
	ModCliente();
	~ModCliente();
	void registrar(Cliente* c);
	Cliente* buscar(int ci);
	void ordenar();

	string toJson();

};

