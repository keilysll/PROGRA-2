#include "Reserva.h"


Reserva::Reserva(int idReserva, Cliente* cliente, Mascota* mascota)
{
	this->idReserva = idReserva;
	this->cliente = cliente;
	this->mascota = mascota;
}

Reserva::~Reserva()
{
}

string Reserva::toStatic(Reserva* reserva)
{
	return reserva->toJson();
}
