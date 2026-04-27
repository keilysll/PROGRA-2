#include "Item.h"



Item::Item(string nombre, int precio)
{
	this->nombre = nombre;
	this->precio = precio;
}

Item::~Item()
{
}

void Item::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Item::setPrecio(int precio)
{
	this->precio = precio;
}

int Item::getPrecio()
{
	return precio;
}

string Item::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\""<<nombre<<"\",\"precio\":"<<precio<<"}";
	return ss.str();
}
