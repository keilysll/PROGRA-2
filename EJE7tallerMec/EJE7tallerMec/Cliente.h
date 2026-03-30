#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"ModVehiculo.h"
#include"Vehiculo.h"
using namespace std;
class Cliente
{
private:
	int ci;
	string nombre;
	int fono;
	ModVehiculo vehiculo;

public:
	Cliente(int ci, string nombre, int fono);
	~Cliente();
	int getCi();
	string getNombre();
	int getFono();
	void registrar(Vehiculo* v);
	Vehiculo* buscar(string placa);
	string toJson();
};

