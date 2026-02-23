#include "Persona.h"

Persona::Persona()
{
	cout << "Constructor por defecto" << endl;
}

Persona::Persona(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
	cout << "Constructor sobrecargado" << endl;

}

Persona::~Persona()
{
	cout << "Destructor"<<endl;

}

int Persona::getCi()
{
	return ci;
}

string Persona::getNombre()
{
	return nombre;
}

int Persona::getFono()
{
	return fono;
}

void Persona::setCi(int ci)
{
	this->ci = ci;
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::setFono(int fono)
{
	this->fono = fono;
}

void Persona::mostrar()
{
	cout << "ci: " <<ci<< " nombre: " << nombre << "fono: " << fono << endl;
}






