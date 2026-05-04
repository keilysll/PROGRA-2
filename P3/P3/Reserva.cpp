#include "Reserva.h"

Reserva::Reserva(int id, Atencion* a1, Cliente* c, Mascota* m)
{
	this->id = id;
	this->a1 = a1;
	this->c = c;
	this->m = m;
}

Reserva::~Reserva()
{
}

string Reserva::toString(Reserva* r)
{
	return r->toString();
}
