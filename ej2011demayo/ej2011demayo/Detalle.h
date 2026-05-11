#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Detalle
{
protected:
	int id;
	int fecha;
	int duracion;
	string tipo;

public:
	Detalle(int id, int fecha, int dureacion);
	~Detalle();
	static string toJson(Detalle* d);
	virtual string toJson();
};

