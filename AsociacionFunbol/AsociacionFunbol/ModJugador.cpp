#include "ModJugador.h"

ModJugador::ModJugador(int cant)
{
    this->cant = cant;
    ind = 0;
    jugadores = new Jugador * [cant];
}

ModJugador::~ModJugador()
{
    delete[] jugadores;
}

void ModJugador::registrar(Jugador* j)
{
    if (ind < cant)
    {
        jugadores[ind] = j;
        ind++;

    }
}

Jugador* ModJugador::buscar(int ci)
{
    for (int i = 0; i < ind; i++)
    {
        if (jugadores[i]->getCi() == ci)

            return jugadores[i];
    }
    return NULL;
}

string ModJugador::toJson()
{
    stringstream ss;
    ss << "[";
    for (int i = 0; i < ind; i++)
    {
        ss << jugadores[i]->toJson();
        if (i < ind - 1)
            ss << ",";
        ss << "]";

    }
    return ss.str();
}
