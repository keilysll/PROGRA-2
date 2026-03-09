#include "Reserva.h"

Reserva::Reserva(int id, Cliente* c, Atencion* a, Mascota* m)
{
    this->id = id;
    cliente = c;
    mascota = m;
    atencion = a;
}

Reserva::~Reserva() {}

string Reserva::toJson()
{
    stringstream ss;

    ss << "{";
    ss << "\"Id\":" << id << ",";
    ss << "\"Cliente\":" << cliente->toJson() << ",";
    ss << "\"Mascota\":" << mascota->toJson() << ",";
    ss << "\"Atencion\":" << atencion->toJson();
    ss << "}";

    return ss.str();
}