#include "ReservaMultiple.h"

ReservaMultiple::ReservaMultiple(int id, Atencion* a1, Atencion* a2, Cliente* c, Mascota* m):Reserva(id,a1,c,m)
{
	this->a2 = a2;
}

ReservaMultiple::~ReservaMultiple()
{
}

string ReservaMultiple::toString()
{
	stringstream ss;
	ss << "{\"ReservaMultiple\":{\"id\":"<<id<<",\"cliente\":" << c->toString() << ",\"mascota\":" << m->toString() << ",\"atencion1\":" << a1->toString() << ",\"atencion2\":" << a2->toString() << "}}";
	return ss.str();
}
