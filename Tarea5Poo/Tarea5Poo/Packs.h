#pragma once
#include "Producto.h"
class Packs :
    public Producto
{
protected:

	Producto* internet;
	Producto* tv;
	Producto* telefonia;
	int descuento;
public:
	Packs(string nombre, int precio, Producto* i, Producto* t, Producto* tel = nullptr);
	~Packs();
	string getNom();
	virtual string toJson() =0;
};

