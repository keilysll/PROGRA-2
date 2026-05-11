#include "PaqueteMinutos.h"

PaqueteMinutos::PaqueteMinutos(int cant):Paquete(cant)
{
	tipo = "minutos";
}

PaqueteMinutos::~PaqueteMinutos()
{
}

string PaqueteMinutos::toJson()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"saldo minutos\":" << cant << "}";
	return ss.str();
}
