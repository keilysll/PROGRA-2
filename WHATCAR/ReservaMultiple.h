#pragma once
#include "Reserva.h"
#include "Atencion.h"
class ReservaMultiple :public Reserva
{
private:
	Atencion* atencion1;
	Atencion* atencion2;
public:
	ReservaMultiple(int idReserva, Atencion* atencion1, Atencion* atencion2, Cliente* cliente, Mascota* mascota);
	~ReservaMultiple();
	string toJson();
};

