#pragma once

#include"Mascota.h"
#include"ListaArray.h"

class Cliente
{
private:
	int ci;
	string nombre;
	int fono;
	ListaArray<Mascota>mascotas;
public:
	Cliente(int ci);
	Cliente(int ci,string nombre, int fono);
	~Cliente();
	int getci();
	ListaArray<Mascota>& getMascotas();
	static string toString(Cliente* c);
	bool operator == (Cliente* c);
	static bool cmpNombreAs(Cliente* c1, Cliente* c2);
	string toString();
	string toJsonSimple();
};

