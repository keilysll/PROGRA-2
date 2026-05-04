#pragma once
#include "Libro.h"
class LibroDigital :
    public Libro
{
private:
    int tamanio;
public:
    LibroDigital(int codigo,string titulo,string autor,int tamanio);
    ~LibroDigital();
    int getCod();
    string toString();
};

