#pragma once
#include "Producto.h"
class Telefonia :
    public Producto
{
private:
	int minutos;
public:
	Telefonia(string nombre);
	Telefonia(string nombre, int precio, string descripccion, int minutos);
	~Telefonia();
	string getNombre();
	string toJson();
};

