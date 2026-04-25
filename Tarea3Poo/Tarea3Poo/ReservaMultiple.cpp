#include "ReservaMultiple.h"

ReservaMultiple::ReservaMultiple(int id, Atencion* a1, Atencion* a2, Cliente* c, Mascota* m):Reserva(id,c,m)
{
	this->a1 = a1;
	this->a2 = a2;
}

string ReservaMultiple::toString()
{
    stringstream ss;
    ss << "{\"ReservaMultiple\":{"<< "\"id\":" << id<< ",\"cliente\":" << cliente->toJsonSimple()<< ",\"mascota\":" << mascota->toJsonSimple()<< "},\"atencion1\":"<< a1->toString()<< ",\"atencion2\":"<< a2->toString()<< "}";
    return ss.str();
}
