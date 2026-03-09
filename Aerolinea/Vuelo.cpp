#include "Vuelo.h"

Vuelo::Vuelo(int cod, string o, string d, Avion* a):pasajeros (10)
{
	this->codigo = cod;
	this->origen = o;
	this->destino = d;
	this->a = a;
}

Vuelo::~Vuelo()
{
}

int Vuelo::getCod()
{
	return codigo;
}

string Vuelo::getorig()
{
	return origen;
}

string Vuelo::getDes()
{
	return destino;
}


Avion* Vuelo::getAv()
{
	return a;
}

void Vuelo::agregarPasajero(Cliente* c)
{
	pasajeros.registrar(c);
}

string Vuelo::toJson()
{
	stringstream ss;

	ss << "{";
	ss << "\"Codigo\":" << codigo << ",";
	ss << "\"Origen\":\"" << origen << "\",";
	ss << "\"Destino\":\"" << destino << "\",";
	ss << "\"Avion\":" << a->toJson() << ",";
	ss << "\"Pasajeros\":" << pasajeros.toJson();
	ss << "}";

	return ss.str();
}