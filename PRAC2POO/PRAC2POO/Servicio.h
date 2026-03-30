#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Servicio
{
protected:
	int codigo;
	string descrip;
	int precio;
	string tipo;
public:
	Servicio(int codigo, string descrip,int precio);
	~Servicio();
	int getCod();
	virtual string toJson() = 0;

};

