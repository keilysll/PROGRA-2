#pragma once
#include "Prestamo.h"
class PrestamoSimple :
    public Prestamo
{
public:
    PrestamoSimple(int id, Socio* socios, Libro* libros, int fechaIni, int fechaDev);
    ~PrestamoSimple();
    int getId();
    string toString();

};

