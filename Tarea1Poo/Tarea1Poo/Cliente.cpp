#include "Cliente.h"

Cliente::Cliente(string nombre):items(10)
{
	this->nombre = nombre;
}

Cliente::~Cliente()
{
}

string Cliente::getNombre()
{
	return nombre;
}

string Cliente::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"items\":"<<items.toJson()<<"}";
	return ss.str();
}

bool Cliente::operator<<(Item* item)
{
	if (!item)
	{
		return false;
	}
	items.registrar(item);
	return true;
}

int Cliente::getCuenta()
{
	int cuenta = 0;
	for (int i = 0; i < items.getInd(); i++)
	{
		Item* item = items.obtener(i);
		cuenta += item->getPrecio();
	}
	return cuenta;
}




