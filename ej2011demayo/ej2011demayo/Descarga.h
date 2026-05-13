#pragma once
#include "Detalle.h"
class Descarga :
    public Detalle
{
private:
    int megas;
public:
    Descarga(int id,int megas, int fecha);
    ~Descarga();
    string toJson();

};

