#include "AtencionMedica.h"

AtencionMedica::AtencionMedica(int codigo, string descrip, int precio, string medicamento):Atencion(codigo,descrip,precio)
{
	this->medicamento = medicamento;
	tipo = "AtencionMedica";
}

AtencionMedica::~AtencionMedica()
{
}

int AtencionMedica::getCod()
{
	return codigo;
}

string AtencionMedica::toString()
{
	stringstream ss;
	ss << "{\"tipo\":\"" << tipo << "\",\"codigo\":" << codigo << ",\"descripcion\":\"" << descrip << "\",\"costo\":" << precio << ",\"medicamentos\":\"" << medicamento << "\"}";
	return ss.str();
}
