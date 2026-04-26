#pragma once
#include "Reserva.h"
#include "Atencion.h"
class ReservaSimple :public Reserva
{
private:
	Atencion* atencion1;
public:
	ReservaSimple(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota);
	~ReservaSimple();
	string toJson();
};

