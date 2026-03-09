#include "ModReserva.h"
#include <sstream>

ModReserva::ModReserva(int t)
{
    tam = t;
    ind = 0;
    reservas = new Reserva * [tam];
}

ModReserva::~ModReserva() {}

void ModReserva::registrar(Reserva* r)
{
    if (ind < tam)
    {
        reservas[ind] = r;
        ind++;
    }
}

string ModReserva::toJson()
{
    stringstream ss;

    ss << "[";

    for (int i = 0; i < ind; i++)
    {
        ss << reservas[i]->toJson();

        if (i < ind - 1)
            ss << ",";
    }

    ss << "]";

    return ss.str();
}