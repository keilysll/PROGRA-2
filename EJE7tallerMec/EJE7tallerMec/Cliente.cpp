
#include "Cliente.h"

Cliente::Cliente(int ci, string nombre, int fono) : vehiculo()
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Cliente::~Cliente()
{
}

int Cliente::getCi()
{
	return ci;
}

string Cliente::getNombre()
{
	return nombre;
}

int Cliente::getFono()
{
	return fono;
}

void Cliente::registrar(Vehiculo* v)
{
	vehiculo.registrar(v);
}

Vehiculo* Cliente::buscar(string placa)
{
	return vehiculo.buscar(placa);
}



string Cliente::toJson()
{
	stringstream ss;
	ss << "{\"ci\":" << ci << ",\"nombre\":\"" << nombre << "\",\"fono\":" << fono << ",\"vehiculos\":" << vehiculo.toJson() << "}";
	return ss.str();
}
