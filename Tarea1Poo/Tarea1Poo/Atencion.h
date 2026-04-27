#pragma once

#include "Mesa.h"
#include "Cliente.h"
#include"ModGenerico.h"

class Atencion
{
private:
	int nro;
	Mesa* mesas;
	ModGenerico<Cliente>clientes;
public:

	Atencion(int nro,Mesa* mesas);
	~Atencion();
	int getNro();
	string toJson();
	bool operator <<(Cliente* cliente);
	Cliente& operator [](int posicion);
	int getCuenta();

};

