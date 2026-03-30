#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Servicio
{
protected:
	int codigo;
	string descr;
	int precio;
	string tipo;
public:
	Servicio(int codigo, string descr, int precio);
	~Servicio();
	int getCod();
	virtual string toJson()= 0;

};

