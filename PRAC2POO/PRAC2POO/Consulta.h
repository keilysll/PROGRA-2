#pragma once
#include "Servicio.h"
class Consulta :
    public Servicio
{
private:
    string doc;
public:
    Consulta(int codigo, string descrip, int precio,string doc);
    ~Consulta();
    int getCod();
    string toJson();


};

