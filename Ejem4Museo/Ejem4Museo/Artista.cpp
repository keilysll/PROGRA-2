#include "Artista.h"

Artista::Artista(string nombre):obras()
{
	this->nombre = nombre;
}

Artista::~Artista()
{
}

string Artista::getNombre()
{
	return nombre;
}

void Artista::registrar(Obra* o)
{
	obras.registrar(o);
}
