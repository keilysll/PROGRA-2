#include "ReservaSimple.h"

ReservaSimple::ReservaSimple(int id, Atencion* a1, Cliente* c, Mascota* m):Reserva(id,a1,c,m)
{
}

ReservaSimple::~ReservaSimple()
{
}

string ReservaSimple::toString()
{
	stringstream ss;
	ss << "{\"ReservaSimple\":{\"id\":"<<id<<",\"cliente\":" << c->toString() << ",\"mascota\":" << m->toString()<<",\"atencion\":" << a1->toString() <<"}}";
	return ss.str();
}
