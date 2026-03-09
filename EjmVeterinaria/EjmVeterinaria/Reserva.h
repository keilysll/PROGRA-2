#pragma once
#include <iostream>
#include <sstream>
#include "Cliente.h"
#include "Mascota.h"
#include "Atencion.h"

using namespace std;

class Reserva
{
private:
    int id;
    Cliente* cliente;
    Mascota* mascota;
    Atencion* atencion;

public:
    Reserva(int id, Cliente* c, Atencion* a, Mascota* m);
    ~Reserva();

    string toJson();
};