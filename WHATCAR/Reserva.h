#pragma once
#include "Cliente.h"
#include "Mascota.h"
class Reserva
{
protected:
	int idReserva; 
	Cliente* cliente;
	Mascota* mascota;
public:
	Reserva(int idReserva, Cliente* cliente, Mascota* mascota);
	~Reserva();
	virtual string toJson() = 0;
	static string toStatic(Reserva* reserva);
};

