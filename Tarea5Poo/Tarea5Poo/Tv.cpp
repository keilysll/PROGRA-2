#include "Tv.h"

Tv::Tv(string nombre) :Producto(nombre)
{
   this->nombre = nombre;
}

Tv::Tv(string nombre, int precio, string descripccion, string canales):Producto(nombre,precio,descripccion)
{
	this->canales = canales;
}

Tv::~Tv()
{
}

string Tv::getNombre()
{
	return nombre;
}

string Tv::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"descripcion\":\"" << descripcion << "\",\"canales\":\"" << canales << "\",\"precio\":" << precio << "}";
	return ss.str();
}
