#pragma once
#include"Atencion.h"
#include "Reserva.h"
class ReservaSimple :
    public Reserva
{
	
private:
    Atencion* atencion;

public:
    ReservaSimple(int id, Atencion* a, Cliente* c, Mascota* m);
    string toString();

};

