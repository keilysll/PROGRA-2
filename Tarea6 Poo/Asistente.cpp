#include "Asistente.h"

Asistente::Asistente(int ci, string nombre):Voluntario(ci,nombre)
{
}

Asistente::~Asistente()
{
}

int Asistente::getCi()
{
	return ci;
}
void Asistente::asignarAnimal(int codigo)
{
	Animal* a = Animales::getInst().buscar(codigo);
	if (a != NULL)
		animales.registrar(a);
}

string Asistente::toString()
{
	stringstream ss;
	ss << "{\"ci\":" << ci<< ",\"nombre\":\"" << nombre<< "\",\"animales\":"<<animales.toJson(Animal::toString)<<"}";
	return ss.str();
}


