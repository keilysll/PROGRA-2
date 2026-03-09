#pragma once
#include "ModMascota.h"
#include <sstream>

class Cliente
{
private:
	string nombre;
	int ci;
	ModMascota mascotas;
public:
	Cliente(string nombre,int ci);
	~Cliente();
	string getNombre();
	int getCi();
	void setNombre(string nom);
	ModMascota& getMascotas();
	string toJson();

};

    
