#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Producto
{
protected:
	string nombre;
	int precio;
	string descripcion;
public:
	Producto(string nombre);
	Producto(string nombre, int precio);
	Producto(string nombre,int precio,string descripccion);
	~Producto();
	string getNom();
	string toJsonP(Producto* p);
	bool operator==(Producto* p);
	virtual string toJson();
	virtual int getPrecioTotal();
};

