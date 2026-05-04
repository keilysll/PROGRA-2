#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Atencion
{
protected:
	int cod;
	string desc;
	int precio;
	string tipo;
public:
	Atencion(int cod);
	Atencion(int cod, string desc,int precio);
	~Atencion();
	virtual string toString();
	static bool CmpCod(Atencion* a1, Atencion* a2);
	bool operator==(Atencion* a);
	static string toString(Atencion* a);
};

