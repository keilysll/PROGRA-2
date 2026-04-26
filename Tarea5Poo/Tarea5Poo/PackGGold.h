#pragma once
#include "Packs.h"
class PackGGold :
    public Packs
{
public:
public:
    PackGGold(string nombre, int precio, Producto* i, Producto* t,Producto* tel);
    ~PackGGold();
    string getNom();
    string toJson();
    int getPrecioTotal();

};

