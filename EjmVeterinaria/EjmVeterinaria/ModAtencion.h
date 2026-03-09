#pragma once
#include "Atencion.h"
#include <sstream>

class ModAtencion
{
private:
    Atencion** atenciones;
    int tam;
    int ind;

public:
    ModAtencion(int t);
    ~ModAtencion();

    void registrar(Atencion* a);
    Atencion* buscar(int codigo);
    void ordenarAten();

    string toJson();
};
