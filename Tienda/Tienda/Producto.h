#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Producto
{
private:
	int codigo;
	int precio;
	string nombre;

public:
	Producto(int cod, int prec, string nom);
	~Producto();

	string getNom();
	int getCod();
	int getPrec();

	string toJson();
};

