#pragma once
#include "Detalle.h"
class Llamada :
    public Detalle
{
public:
    Llamada(int id, int fecha, int dureacion);
    ~Llamada();
    string toJson();
};

