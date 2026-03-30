#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include"ModMascota.h"
using namespace std;

class Cliente
{
private:

	int ci;
	string nombre;
	int fono;
	ModMascota mascota;

public:
	Cliente(int ci, string nombre, int fono);
	~Cliente();
	int getCi();
	string getNombre();
	int getFono();
	void registrar(Mascota* m);
	Mascota* bucar(string nombre);
	string toJson();

};

