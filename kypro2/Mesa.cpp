#include "Mesa.h"

Mesa::Mesa(string codigo, int cap)
{
	this->codigo = codigo;
	this->cap = cap;
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
	ss << "{\"codigo\":\"" << codigo << "\",\"capacidad\":" << cap << "}";
	return ss.str();
}


