#pragma once
#include"Atencion.h"
#include "Reserva.h"
class ReservaMultiple :
    public Reserva
{
    private:
        Atencion* a1;
        Atencion* a2;
    public:
        ReservaMultiple(int id, Atencion* a1, Atencion* a2, Cliente* c, Mascota* m);
        string toString();
};

