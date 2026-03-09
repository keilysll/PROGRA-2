
#include "Cliente.h"

Cliente::Cliente(string nombre, int ci) :mascotas(3)
{
    this->nombre = nombre;
    this->ci = ci;
}

Cliente::~Cliente()
{
}

string Cliente::getNombre()
{
    return nombre;
}

int Cliente::getCi()
{
    return ci;
}

void Cliente::setNombre(string nom)
{
    this->nombre = nom;
}

ModMascota& Cliente::getMascotas()
{
    return mascotas;

}


string Cliente::toJson()
{
    stringstream ss;

    ss << "{";
    ss << "\"Nombre\":\"" << nombre << "\",";
    ss << "\"Ci\":" << ci << ",";
    ss << "\"Mascotas\":" << mascotas.toJson();
    ss << "}";

    return ss.str();
}