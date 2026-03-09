#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Atencion
{
private:
    string descripcion;
    int fecha;
    int costo;
    int codigo;

public:
    Atencion(string d, int f, int c, int cod);
    ~Atencion();
    string getdesc();
    int getFecha();
    int getCosto();
    int getCodigo();
    string toJson();
};

