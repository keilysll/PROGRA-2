#pragma once
#include"Cliente.h"
class ModCliente
{
private:
	int ind;
	int tam;
	Cliente** clientes;
public:
	ModCliente(int tam);
	~ModCliente();
	int getInd();
	int getTam();
	void registrar(Cliente* c);
	Cliente* buscar(int ci);
	string toJson();
};

