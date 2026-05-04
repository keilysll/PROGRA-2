#include "SingletonSocios.h"
SingletonSocios::SingletonSocios()
{
}
SingletonSocios::~SingletonSocios()
{
}

SingletonSocios& SingletonSocios::getInst()
{
	static SingletonSocios inst;
	return inst;
}

void SingletonSocios::operator<<(Socio* s)
{
	if(s!=NULL)
	socios.registrar(s);
}

Socio* SingletonSocios::buscar(int ci)
{
	Socio cAbuscar(ci);
	Socio* cEncontrado = socios.buscar(&cAbuscar);
	return cEncontrado;
}

string SingletonSocios::toString()
{
	socios.ordenar(Socio::CompNom);
	return socios.toJson(Socio::toString);
}


