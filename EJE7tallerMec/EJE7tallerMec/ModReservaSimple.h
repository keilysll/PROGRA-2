#pragma once
#include"Reserva.h"
#define CANT_MAX_RESER 10
class ModReservaSimple
{
private:
	int ind;
	Reserva** reservas;
public:
	ModReservaSimple();
	~ModReservaSimple();
	void registrar(Reserva* r);
	string toJson();

};

