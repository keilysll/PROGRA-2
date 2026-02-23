#pragma once
#include "ModPersona.h"
#define CANT_MAX_CLI 10
class Tienda
{
private:
	string nombre;
	ModPersona clientes;
public:
	Tienda(string nombre);

	~Tienda();
	string getNombre();
	ModPersona& getClientes();
	void mostrar();


};

