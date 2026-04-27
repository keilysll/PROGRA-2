#include "Animal.h"

Animal::Animal(int codigo)
{
	this->codigo = codigo;
}

Animal::Animal(int codigo, string especie, int edad)
{
	this->codigo = codigo;
	this->especie = especie;
	this->edad = edad;
}

Animal::~Animal()
{
}

int Animal::getCod()
{
	return codigo;
}

string Animal::toString()
{
	return "{}";
}


bool Animal::operator==(Animal* a)
{
	return codigo == a->codigo;
}

bool Animal::cmpCodigo(Animal* a1, Animal* a2)
{
	return a1->codigo < a2->codigo;
}

string Animal::toString(Animal* a)
{
	return a->toString();
}


