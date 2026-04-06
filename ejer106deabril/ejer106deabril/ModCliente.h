#pragma once
#include"Cliente.h"
#define CANT_MAX_CLIEN 10
class ModCliente
{
private:
	int ind;
	Cliente** clientes;
public:
	ModCliente();
	~ModCliente();

};

