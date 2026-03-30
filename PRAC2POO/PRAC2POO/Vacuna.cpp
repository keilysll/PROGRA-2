#include "Vacuna.h"

Vacuna::Vacuna(int codigo, string descrip, int precio, string vacuna) :Servicio(codigo, descrip, precio)
{
	this->vacuna = vacuna;
	tipo = "Vacunacion";
}

Vacuna::~Vacuna()
{
}

int Vacuna::getCod()
{
	return codigo;
}

string Vacuna::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":"<<codigo<<",\"descripcion\":\""<<descrip<<"\",\"costo\":"<<precio<<",\"vacuna\":\""<<vacuna<<"\"}";
	return ss.str();
}
