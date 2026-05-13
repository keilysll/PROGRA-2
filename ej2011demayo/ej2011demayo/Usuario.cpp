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
	PaqueteMinutos* pm = nullptr;
	for (int i = 0; i < paquetes.getTam(); i++)
	{
		pm = dynamic_cast<PaqueteMinutos*>(paquetes[i]);
		if (pm != nullptr)
		break;
	}
	if (pm != nullptr && pm.getmin >= )
	{
		pm->setminutos(pm->getmin() - l.getminutos());
	}
	else 

}
string Usuario::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"saldo\":" << saldo << ",\"paquetes\":" << paquetes.toJson(Paquete::toJson) << ",\"detalle\":" << detalles.toJson(Detalle::toJson) << "}";
	return ss.str();
}
