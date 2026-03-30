#pragma once
#include "Servicio.h"
class Chaperia :
    public Servicio
{
private:
    string detalle;
public:
    Chaperia(int codigo, string descr, int precio, string detalle);
    ~Chaperia();
    int getCod();
    string toJson();


};

