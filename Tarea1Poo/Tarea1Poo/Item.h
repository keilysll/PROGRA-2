#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Item
{
private:
	string nombre;
	int precio;
public:
	Item(string nombre, int precio);
	~Item();
	void setNombre(string nombre);
	void setPrecio(int precio);
	int getPrecio();
	string toJson();
};

