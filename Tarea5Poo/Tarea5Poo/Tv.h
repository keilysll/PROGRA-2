#pragma once
#include "Producto.h"
class Tv :
    public Producto
{
private:
	string canales;
public:
	Tv(string nombre);
	Tv(string nombre, int precio, string descripccion,string canales);
	~Tv();
	string getNombre();
	string toJson();
};

