#include "Prestamo.h"

Prestamo::Prestamo(int id,Socio* socios, Libro* libros, int fechaIni, int fechaDev)
{
	this->id = id;
	this->socios = socios;
	this->libros = libros;
	this->fechaIni = fechaIni;
	this->fechaDev = fechaDev;
}

Prestamo::~Prestamo()
{
}

int Prestamo::getId()
{
	return id;
}

Libro* Prestamo::getlibro()
{
	return libros;
}

bool Prestamo::ComId(Prestamo* p1, Prestamo* p2)
{
	return p1->id < p2->id;
}

bool Prestamo::operator==(Prestamo* p)
{
	return id == p->id;
}

string Prestamo::toStringPres(Prestamo* p)
{
	return p->toString();
}

int Prestamo::getFechIni()
{
	return fechaIni;
}

int Prestamo::getFechDev()
{
	return fechaDev;
}
