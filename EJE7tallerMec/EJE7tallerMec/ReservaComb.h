#pragma once
#include "Reserva.h"
class ReservaComb :
    public Reserva
{
private:
	Cliente* cliente;
	Vehiculo* vehiculo;
	Servicio* servicio1;
	Servicio* servicio2;
public:
	ReservaComb(int id, Servicio* s1, Servicio* s2, Cliente* c, Vehiculo* v);
	~ReservaComb();
	string toJson();

};

