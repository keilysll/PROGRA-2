#include "Tienda.h"

Tienda::Tienda(string nombre): clientes(CANT_MAX_CLI)
{
	this->nombre = nombre;
}

Tienda::~Tienda()
{
}

string Tienda::getNombre()
{
	return nombre;
}

ModCliente& Tienda::getClientes()
{
	return clientes;
}

void Tienda::mostrar()
{
	cout << "Tienda: " << nombre << endl;
	cout << "Clientes: " << clientes << endl;
	clientes.mostrar();

}



