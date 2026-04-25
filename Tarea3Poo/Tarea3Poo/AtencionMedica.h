#pragma once
#include "Atencion.h"
class AtencionMedica :
    public Atencion
{
private:
    string medicamento;
public:
    AtencionMedica(int codigo,string descrip,int precio,string medicamento);
    ~AtencionMedica();
     int getCod();
     string toString();


};

