#include "AtencionPeluqueria.h"

AtencionPeluqueria::AtencionPeluqueria(int cod, string desc, int precio, int durac):Atencion(cod,desc,precio)
{
	this->durac = durac;
	tipo = "AtencionPeluqueria";
}

AtencionPeluqueria::~AtencionPeluqueria()
{
}

string AtencionPeluqueria::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":" << cod << ",\"descripcion\":\"" << desc << "\",\"costo\":" << precio << ",\"duracion\":" << durac << "}";
	return ss.str();
}
