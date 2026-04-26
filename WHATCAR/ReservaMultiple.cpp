#include "ReservaMultiple.h"

ReservaMultiple::ReservaMultiple(int idReserva, Atencion* atencion1, Atencion* atencion2, Cliente* cliente, Mascota* mascota)
	:Reserva(idReserva,cliente,mascota)
{
	this->atencion1 = atencion1;
	this->atencion2 = atencion2;
}

ReservaMultiple::~ReservaMultiple()
{
}

string ReservaMultiple::toJson()
{
	stringstream ss;
	ss << "{\"ReservaMultiple\":{\"id\":" << idReserva
		<< ",\"cliente\":" << cliente->toJsonB()
		<< ",\"mascota\":" << mascota->toJson()
		<< "},\"atencion1\":" << atencion1->toJson() << ",\"atencion2\":" << atencion2->toJson() << "}";
	return ss.str();
}
