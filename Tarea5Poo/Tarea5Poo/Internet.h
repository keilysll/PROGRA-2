#pragma once
#include "Producto.h"
class Internet :
    public Producto
{
private:
	int velSubida;
	int velBajada;
public:
	Internet(string nombre);
	Internet(string nombre, int precio, string descripccion, int velSubida,int velBajada);
	~Internet();
	string getNombre();
	string toJson();
};

