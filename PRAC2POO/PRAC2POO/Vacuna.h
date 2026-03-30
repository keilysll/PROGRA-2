#pragma once
#include "Servicio.h"
class Vacuna :
    public Servicio
{
private:
    string vacuna;
public:
    Vacuna(int codigo, string descrip, int precio, string vacuna);
    ~Vacuna();
    int getCod();
    string toJson();

};

