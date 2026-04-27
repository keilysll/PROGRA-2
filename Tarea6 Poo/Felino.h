#pragma once
#include "Animal.h"
class Felino :
    public Animal
{
private: 
    int peso;
public:
    Felino(int codigo,string especie, int edad ,int peso);
    ~Felino();
    int getCod();
    string toString();
};

