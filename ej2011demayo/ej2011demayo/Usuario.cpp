#include "Usuario.h"

Usuario::Usuario(string nombre, int saldo)
{
	this->nombre = nombre;
	this->saldo = saldo;
}

Usuario::~Usuario()
{
}
Lista<Paquete>& Usuario::getPaquetes()
{
	return paquetes;
}
void Usuario::ejecutarAccion(Llamada* l)
{
	
}
string Usuario::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"saldo\":" << saldo << ",\"paquetes\":" << paquetes.toJson(Paquete::toJson) << ",\"detalle\":" << detalles.toJson(Detalle::toJson) << "}";
	return ss.str();
}




