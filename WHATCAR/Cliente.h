#pragma once
#include "ModGen.h"
#include "Mascota.h"
class Cliente
{
private:
	int ci;
	string nombre;
	int fono;
	ModGen<Mascota> mascotas;
public:
	Cliente(int ci,string nombre,int fono);
	Cliente(int ci);
	~Cliente();
	ModGen<Mascota>& getMascotas();
	bool operator==(Cliente* cliente);
	static bool comparacionCi(Cliente* cliente1, Cliente* cliente2);
	string toJson();
	string toJsonB();
	static string toStatic(Cliente* cliente);

};

