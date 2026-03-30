#include "ModVehiculo.h"

ModVehiculo::ModVehiculo()
{
	ind = 0;
	vehiculos = new Vehiculo * [CANT_MAX_VEH];
}

ModVehiculo::~ModVehiculo()
{
	delete[] vehiculos;
}

void ModVehiculo::registrar(Vehiculo* v)
{
	if (ind < CANT_MAX_VEH)
	{
		vehiculos[ind] = v;
		ind++;
	}
}

Vehiculo* ModVehiculo::buscar(string placa)
{
	for (int i = 0; i < ind; i++)
	{
		if (vehiculos[i]->getPlaca() == placa)
		{
			return vehiculos[i];
		}
	}
	return NULL;
}

string ModVehiculo::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << vehiculos[i]->toJson();
		if (i < ind - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}

