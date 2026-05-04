#include "LibroDigital.h"

LibroDigital::LibroDigital(int codigo, string titulo, string autor, int tamanio):Libro(codigo,titulo,autor)
{
	this->tamanio = tamanio;
	tipo = "digital";
}

LibroDigital::~LibroDigital()
{
}

int LibroDigital::getCod()
{
	return codigo;
}

string LibroDigital::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":" << codigo << ",\"titulo\":\"" << titulo << "\",\"autor\":\"" << autor << "\",\"tamanioMB\":" << tamanio << "}";
	return ss.str();
}
