#include "Tiendaa.h"

Tiendaa::Tiendaa(string nombre)
	: clientes(10), productos(10), ventas(10)
{
	this->nombre = nombre;
}

Tiendaa::~Tiendaa()
{
}

string Tiendaa::getNom()
{
	return nombre;
}

ModCliente& Tiendaa::getCliente()
{
	return clientes;
}

ModProducto& Tiendaa::getProd()
{
	return productos;
}

ModVenta& Tiendaa::getvet()
{
	return ventas;
}

string Tiendaa::toJson()
{
	stringstream ss;

	ss << "{";
	ss << "\"Nombre\":\"" << nombre << "\",";
	ss << "\"Clientes\":" << clientes.Json() << ",";
	ss << "\"Productos\":" << productos.Json() << ",";
	ss << "\"Ventas\":" << ventas.toJson();
	ss << "}";

	return ss.str();
}