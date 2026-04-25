#pragma once
#pragma once
#include"Mascota.h"
#include"Cliente.h"
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Reserva
{
protected:
    int id;
    Cliente* cliente;
    Mascota* mascota;

public:
    Reserva(int id, Cliente* c, Mascota* m);
    virtual ~Reserva();

    virtual string toString() = 0;

    static string toString(Reserva* r);


};

