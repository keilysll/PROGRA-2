#include "ReservaSimple.h"

ReservaSimple::ReservaSimple(int id, Atencion* a, Cliente* c, Mascota* m):Reserva(id,c,m)
{
	this->atencion = a;
}

string ReservaSimple::toString()
{
    stringstream ss;
    ss << "{\"ReservaSimple\":{"<< "\"id\":" << id << ",\"cliente\":" << cliente->toJsonSimple()<< ",\"mascota\":" << mascota->toJsonSimple()<< "},\"atencion\":"<< atencion->toString()<< "}";
    return ss.str();
}
