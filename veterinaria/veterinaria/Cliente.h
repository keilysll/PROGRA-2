#pragma once
#include "ModMascota.h"

class Cliente
{
private:
	string nombre;
	ModMascota mascotas;
public:
	Cliente(string nombre);
	~Cliente();
	string getNombre();
	void setNombre(string nom);
	ModMascota& getMascotas();
	void mostrarCliente();
};
