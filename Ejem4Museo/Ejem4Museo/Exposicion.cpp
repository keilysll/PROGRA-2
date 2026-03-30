#include "Exposicion.h"

Exposicion::Exposicion(int nro)
{
	this->nro = nro;
}

Exposicion::~Exposicion()
{
}

void Exposicion::registrar(Artista* a)
{
	artistas.registrar(a);
}

int Exposicion::getNro()
{
	return nro;
}

Artista* Exposicion::Buscar(string nombre)
{
	return artistas.buscar(nombre);
}


string Exposicion::toJson()
{
	stringstream ss;
	ss << "{\"numero\":" << nro << ",\"artistas\":" << artistas.toJson() << "}";
	return ss.str();
}
