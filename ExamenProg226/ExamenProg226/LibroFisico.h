#pragma once
#include "Libro.h"
class LibroFisico :
    public Libro
{
private:
    int nro;
public:
    LibroFisico(int codigo, string titulo, string autor, int nro);
    ~LibroFisico();
    int getCod();
    string toString();
};

