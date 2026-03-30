#pragma once
#include"Vehiculo.h"
#define CANT_MAX_VEH 10
class ModVehiculo
{
private:
	Vehiculo** vehiculos;
	int ind;
public:
	ModVehiculo();
	~ModVehiculo();
	void registrar(Vehiculo* v);
	Vehiculo* buscar(string placa);
	string toJson();
};

