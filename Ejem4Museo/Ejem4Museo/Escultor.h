#pragma once
#include "Artista.h"
class Escultor :
    public Artista
{
private:
    string material;
public:
    Escultor(string nombre, string material);
    ~Escultor();
    string getNombre();
    string toJson();


};

