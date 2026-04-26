#include "PackSSilver.h"

PackSSilver::PackSSilver(string nombre, int precio,Producto* i, Producto* t):Packs(nombre, precio, i, t)
{
	descuento = 20;
}

PackSSilver::~PackSSilver()
{
}

string PackSSilver::getNom()
{
	return nombre;
}

string PackSSilver::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"precio\":" << precio << ",\"desc\":" << descuento << ",\"precio silver\":" << precio - (precio * 20 / 100) << ",\"internet\":" << internet->toJson() << ",\"tv\":" << tv->toJson() << ",\"descuento\":" << descuento << "}";
	return ss.str();
}

int PackSSilver::PrecioTotal()
{
	return precio-(precio*descuento/100);
}
