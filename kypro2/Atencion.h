#pragma once
#include"Mesa.h"
#include"Cliente.h"
#include"ModGenerico.h"
class Atencion
{
private:
	int numero;
	Mesa* mesa;
	ModGenerico<Cliente>clientes;
	
public:

	Atencion(int numero, Mesa* mesa);
	~Atencion();
	string toJson();

	bool operator<<(Cliente* cliente);

	Cliente* operator[](int pos);
};

