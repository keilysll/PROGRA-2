#pragma once
#include "Packs.h"
class PackSSilver :
    public Packs
{
public:
    PackSSilver(string nombre, int precio, Producto* i, Producto* t);
    ~PackSSilver();
    string getNom();
    string toJson();
    int PrecioTotal();

};

