#include "Atencion.h"
#include<sstream>
Atencion::Atencion(string d, int f, int c, int cod)
{
    descripcion = d;
    fecha = f;
    costo = c;
    codigo = cod;
}

Atencion::~Atencion() {}

string Atencion::getdesc()
{
    return descripcion;
}

int Atencion::getFecha()
{
    return fecha;
}

int Atencion::getCosto()
{
    return costo;
}

int Atencion::getCodigo()
{
    return codigo;
}

string Atencion::toJson()
{
    stringstream ss;

    ss << "{";
    ss << "\"Descripcion\":\"" << descripcion << "\",";
    ss << "\"Fecha\":" << fecha << ",";
    ss << "\"Costo\":" << costo << ",";
    ss << "\"Codigo\":" << codigo;
    ss << "}";

    return ss.str();
}