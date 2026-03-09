#include "Producto.h"

Producto::Producto(int cod, int prec, string nom)
{
	this->nombre = nom;
	this->codigo = cod;
	this->precio = prec;
}

Producto::~Producto()
{
}

string Producto::getNom()
{
	return nombre;
}

int Producto::getCod()
{
	return codigo;
}

int Producto::getPrec()
{
	return precio;
}

string Producto::toJson()
{
	stringstream ss;

	ss << "{";
	ss << "\"Codigo\":" << codigo << ",";
	ss << "\"Nombre\":\"" << nombre << "\",";
	ss << "\"Precio\":" << precio;
	ss << "}";

	return ss.str();
}