#pragma once
#include "Atencion.h"
class AtencionMedica :
    public Atencion
{
private:
    string med;
public:
    AtencionMedica(int cod, string desc, int precio, string med);
    ~AtencionMedica();
    string toString();
};

