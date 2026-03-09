#pragma once
#include"Reserva.h"
class ModReserva
{
private:
	int tam;
	int ind;
	Reserva** reservas;

public:
	ModReserva(int tam);
	~ModReserva();
	int getInd();
	int getTam();
	void registrar(Reserva* r);
	string toJson();
};

