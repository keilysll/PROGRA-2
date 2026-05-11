#pragma once
#include "Paquete.h"
class PaqueteMegas :
    public Paquete
{
public:
    PaqueteMegas(int cant);
    ~PaqueteMegas();
    string toJson();
};

