#include "Telefonia.h"

Telefonia::Telefonia(string nombre):Producto(nombre)
{
	this->minutos = minutos;
}

Telefonia::Telefonia(string nombre, int precio, string descripccion, int minutos):Producto(nombre, precio, descripccion)
{
	this->minutos = minutos;
}

Telefonia::~Telefonia()
{
}

string Telefonia::getNombre()
{
	return nombre;
}

string Telefonia::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"descripcion\":\"" << descripcion << "\",\"minutos\":" << minutos << ",\"precio\":" << precio << "}";
	return ss.str();
}
