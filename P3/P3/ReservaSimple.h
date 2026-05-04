#pragma once
#include "Reserva.h"
class ReservaSimple :
    public Reserva
{
public:
    ReservaSimple(int id, Atencion* a1, Cliente* c, Mascota* m);
    ~ReservaSimple();
    string toString();
};

