#pragma once
#include "Atencion.h"
class AtencionPeluqueria :
    public Atencion
{
private:
    int duracion;
public:
    AtencionPeluqueria(int codigo,string descrip,int precio, int duracion);
    ~AtencionPeluqueria();
    int getCod();
    string toString();
};

