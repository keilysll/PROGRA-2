#include "ModReservaSimple.h"

ModReservaSimple::ModReservaSimple()
{
	ind = 0;
	reservas = new Reserva * [CANT_MAX_RESER];
}

ModReservaSimple::~ModReservaSimple()
{
	delete[] reservas;
}

void ModReservaSimple::registrar(Reserva* r)
{
	if (ind < CANT_MAX_RESER)
	{
		reservas[ind] = r;
		ind++;
	}
}

string ModReservaSimple::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << reservas[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
