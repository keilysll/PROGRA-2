#include "AtencionPeluqueria.h"



AtencionPeluqueria::AtencionPeluqueria(int codigo, string descrip, int precio, int duracion):Atencion(codigo,descrip,precio)
{
	this->duracion = duracion;
	tipo = "AtencionPeluqueria";
}

AtencionPeluqueria::~AtencionPeluqueria()
{
}

int AtencionPeluqueria::getCod()
{
	return codigo;
}

string AtencionPeluqueria::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":" << codigo << ",\"descripcion\":\"" << descrip << "\",\"costo\":" << precio << ",\"duracion\":" << duracion << "}";
	return ss.str();
}
