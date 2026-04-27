#pragma once
#include "Animal.h"
class Ave :
    public Animal
{
private:
    bool vuelo;
public:
    Ave(int codigo, string especie,int edad, bool vuelo);
    ~Ave();
    int getCod();
    string toString();
};

