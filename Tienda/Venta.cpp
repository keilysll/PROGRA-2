#include "Venta.h"

Venta::Venta(int id, int fecha, Cliente* c)
	: productos(CANT_MAXPRODUC_ENVENTA)
{
	this->id = id;
	this->fecha = fecha;
	this->cliente = c;
}

Venta::~Venta()
{
}

int Venta::getFech()
{
	return fecha;
}

int Venta::getId()
{
	return id;
}

ModProducto& Venta::getProductos()
{
	return productos;
}

string Venta::toJson()
{
	stringstream ss;

	ss << "{";
	ss << "\"Id\":" << id << ",";
	ss << "\"Fecha\":" << fecha << ",";
	ss << "\"Productos\":" << productos.Json();
	ss << "}";

	return ss.str();
}