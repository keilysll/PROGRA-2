#include "cliente.h"

cliente::cliente()
{
	
}

cliente::cliente(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;

}

cliente::~cliente()
{
}

int cliente::getCi()
{
	return ci;
}

string cliente::getNombre()
{
	return nombre;
}

int cliente::getFono()
{
	return fono;
}

void cliente::setCi(int ci)
{
	this->ci = ci;
}

void cliente::setNombre(string nombre)
{
	this->nombre = nombre;
}

void cliente::setFono(int fono)
{
	this->fono = fono;
}

void cliente::mostrar()
{
	cout << "ci: " << ci << " nombre: " << nombre << "fono: " << fono << endl;
}


