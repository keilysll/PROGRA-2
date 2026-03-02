#include "Cliente.h"

Cliente::Cliente(string nombre) :mascotas(3)
{
	this->nombre = nombre;
}

Cliente::~Cliente()
{
}

string Cliente::getNombre()
{
	return nombre;
}

void Cliente::setNombre(string nom)
{
	this->nombre = nom;
}

ModMascota& Cliente::getMascotas()
{
	return mascotas;

}

void Cliente::mostrarCliente()
{
	cout << " Nombre: " << nombre << endl;
	mascotas.mostrarMascota();
}


