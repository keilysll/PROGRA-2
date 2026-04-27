#include "Mesa.h"

Mesa::Mesa(string codigo, int capac)
{
	this->codigo = codigo;
	this->capac = capac;
}

Mesa::~Mesa()
{
}

string Mesa::getCod()
{
	return codigo;
}

string Mesa::toJson()
{
	stringstream ss;
	ss << "{\"codigo\":\"" << codigo << "\",\"capacidad\":" << capac << "}";
	return ss.str();
}
