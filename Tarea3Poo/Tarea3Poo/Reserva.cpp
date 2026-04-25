#include "Reserva.h"



Reserva::Reserva(int id, Cliente* c, Mascota* m)
{
	this->id = id;
	this->cliente = c;
	this->mascota = m;
}

Reserva::~Reserva()
{
}

string Reserva::toString(Reserva* r)
{
	return r->toString();
}


