#include "Conferencia.h"

Conferencia::Conferencia(int nro, int fecha)
{
	this->nro = nro;
	this->fecha = fecha;

}

Conferencia::~Conferencia()
{
	
}

int Conferencia::getNumero()
{
	return nro;
}

void Conferencia::registrar(Docente* d)
{
	docentes.registrar(d);
	
}

void Conferencia::registrar(Estudiante* p)
{
	estudiantes.registrar(p);
}






