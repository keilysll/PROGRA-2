#pragma once
#include "Prestamo.h"
class PrestamoRenovado :
    public Prestamo
{
private:
    int nuevaFech;
    string motivo;

public:
    PrestamoRenovado(int id,Socio* socios, Libro* libros, int fechaIni, int fechaDev,int nuevaFech,string motivo);
    ~PrestamoRenovado();
    int getInd();
    string toString();


};

