#pragma once
#include "Paquete.h"
class PaqueteMinutos :
    public Paquete
{
public:
    PaqueteMinutos(int cant);
    ~PaqueteMinutos();
    string toJson();

};

