#pragma once
#include "Atencion.h"
class AtencionPeluqueria :
    public Atencion
{
private:
    int durac;
public:
    AtencionPeluqueria(int cod, string desc, int precio, int durac);
    ~AtencionPeluqueria();
    string toString();

};

