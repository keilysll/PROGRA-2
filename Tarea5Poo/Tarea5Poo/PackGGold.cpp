#include "PackGGold.h"

PackGGold::PackGGold(string nombre, int precio, Producto* i, Producto* t, Producto* tel):Packs(nombre,precio,i,t,tel)
{
	descuento = 30;
}

PackGGold::~PackGGold()
{
}

string PackGGold::getNom()
{
	return nombre;
}

string PackGGold::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"precio\":" << precio << ",\"desc\":" << descuento << ",\"precio gold\":" << precio - (precio * 30 / 100) << ",\"internet\":" << internet->toJson() << ",\"tv\":" << tv->toJson() << ",\"telefonia\":" << telefonia->toJson() << ",\"descuento\":" << descuento << "}";
	return ss.str();
}

int PackGGold::getPrecioTotal()
{
	return precio - (precio*descuento/100);
}
