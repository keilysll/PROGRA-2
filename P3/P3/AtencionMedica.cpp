#include "AtencionMedica.h"

AtencionMedica::AtencionMedica(int cod, string desc, int precio, string med):Atencion(cod,desc,precio)
{
	this->med = med;
	tipo = "AtencionMedica";
}

AtencionMedica::~AtencionMedica()
{
}

string AtencionMedica::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\""<<tipo<<"\",\"codigo\":" << cod << ",\"descripcion\":\"" << desc << "\",\"costo\":" << precio << ",\"medicamentos\":\"" << med << "\"}";
	return ss.str();
}
