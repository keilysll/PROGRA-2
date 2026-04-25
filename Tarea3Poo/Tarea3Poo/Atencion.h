#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Atencion
{
protected:
	int codigo;
	string descrip;
	int precio;
	string tipo;
public:
	Atencion(int codigo);
	Atencion(int codigo,string descrip,int precio);
	~Atencion();
	int getCod();
    virtual string toString();
	static string toString(Atencion* a);
	bool operator==(Atencion* a);
	static bool cmpCodigoAsc(Atencion* a1, Atencion* a2);
};

