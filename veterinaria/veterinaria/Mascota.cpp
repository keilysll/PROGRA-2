#include "Mascota.h"

Mascota::Mascota(string _nom, string _raza)
{
	this->nombre = _nom;
	this->raza = _raza;
}

Mascota::~Mascota()
{
}

string Mascota::getNombre()
{
	return nombre;
}

string Mascota::getRaza()
{
	return raza;
}

void Mascota::setNombre(string _nom)
{
	this-> nombre= _nom;
}

void Mascota::setRaza(string _raza)
{
	this->raza = _raza;
}

void Mascota::mostrar()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
}
