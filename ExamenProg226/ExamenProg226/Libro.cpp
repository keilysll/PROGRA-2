#include "Libro.h"

Libro::Libro(int codigo)
{
	this->codigo = codigo;
}

Libro::Libro(int codigo, string titulo, string autor)
{
	this->codigo = codigo;
	this->titulo = titulo;
	this->autor = autor;
}

Libro::~Libro()
{
}

int Libro::getCod()
{
	return codigo;
}
string Libro::toString()
{
	return "{}";
}

string Libro::toString(Libro* l)
{
	return l->toString();
}

bool Libro::operator==(Libro* l)
{
	return this->codigo==l->codigo;
}

bool Libro::CompCod(Libro* l1, Libro* l2)
{
	return l1->codigo > l2->codigo;
}
