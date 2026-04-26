#include "Internet.h"

Internet::Internet(string nombre) :Producto(nombre)
{
	this->nombre = nombre;
}

Internet::Internet(string nombre, int precio, string descripccion, int velSubida, int velBajada) :Producto(nombre, precio, descripccion)
{
	this->velSubida = velSubida;
	this->velBajada = velBajada;
}

Internet::~Internet()
{
}

string Internet::getNombre()
{
	return nombre;
}

string Internet::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"descripcion\":\"" << descripcion << "\",\"velocidadSubida\":" << velSubida << ",\"velocidadSubida\":" << velBajada << ",\"precio\":" << precio << "}";
	return ss.str();
}
