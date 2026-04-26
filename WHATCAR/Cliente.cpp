#include "Cliente.h"

Cliente::Cliente(int ci, string nombre, int fono)
{
    this->ci = ci;
    this->nombre = nombre;
    this->fono = fono;
}

Cliente::Cliente(int ci)
{
    this->ci = ci;
}

Cliente::~Cliente()
{
}

ModGen<Mascota>& Cliente::getMascotas()
{
    return mascotas;
}

bool Cliente::operator==(Cliente* cliente)
{
    return ci == cliente->ci;
}

bool Cliente::comparacionCi(Cliente* cliente1, Cliente* cliente2)
{
    return cliente1->ci < cliente2->ci;
}

string Cliente::toJson()
{
    stringstream ss;
    mascotas.ordenar(Mascota::comparacionNombre);
    ss << "{\"ci\":" << ci 
        << ",\"nombre\":\"" << nombre 
        << "\",\"fono\":" << fono
        << ",\"mascotas\":" << mascotas.toJson(Mascota::toStatic) << "}";
    return ss.str();
}

string Cliente::toJsonB()
{
    stringstream ss;
    ss << "{\"ci\":" << ci
        << ",\"nombre\":\"" << nombre
        << "\",\"fono\":" << fono << "}";
    return ss.str();
}

string Cliente::toStatic(Cliente* cliente)
{
    return cliente->toJson();
}
