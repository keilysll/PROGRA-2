#include "ReservaSimple.h"

ReservaSimple::ReservaSimple(int idReserva, Atencion* atencion1, Cliente* cliente, Mascota* mascota)
	:Reserva(idReserva, cliente, mascota)
{
	this->atencion1 = atencion1;
}

ReservaSimple::~ReservaSimple()
{
}

string ReservaSimple::toJson()
{
	stringstream ss;
	ss << "{\"ReservaSimple\":{\"id\":" << idReserva
		<< ",\"cliente\":" << cliente->toJsonB()
		<< ",\"mascota\":" << mascota->toJson()
		<< "},\"atencion\":" << atencion1->toJson() << "}";
	return ss.str();
}
