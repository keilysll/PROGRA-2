#include "LibroFisico.h"

LibroFisico::LibroFisico(int codigo, string titulo, string autor, int nro):Libro(codigo,titulo,autor)
{
	this->nro = nro;
	tipo = "fisico";
}

LibroFisico::~LibroFisico()
{
}

int LibroFisico::getCod()
{
	return codigo;
}

string LibroFisico::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":" << codigo << ",\"titulo\":\"" << titulo << "\",\"autor\":\"" << autor << "\",\"ejemplares\":" << nro << "}";
	return ss.str();
}
