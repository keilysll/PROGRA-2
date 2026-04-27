#include "Padrino.h"

Padrino::Padrino(int ci, string nombre):Voluntario(ci,nombre)
{
}

Padrino::~Padrino()
{
}

int Padrino::getCi()
{
	return ci;
}

void Padrino::realizarPago(Pago* p)
{
	pagos.registrar(p);
}



string Padrino::toString()
{
	stringstream ss;
	ss << "{\"ci\":" << ci << ",\"nombre\":\"" << nombre << "\",\"pagos\":" << pagos.toJson(Pago::toString)<<"}";
	return ss.str();
}
