#pragma once
#include "Servicio.h"
class Mantenimiento :
    public Servicio
{
private:
    int km;
public:
    Mantenimiento(int codigo, string descr, int precio, int km);
    ~Mantenimiento();
    int getCod();
    string toJson();


};

