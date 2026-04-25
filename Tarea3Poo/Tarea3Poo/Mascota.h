#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Mascota
{
private:
	string nombre;
	int edad;
public:
	Mascota(string nombre);
	Mascota(string nombre, int edad);
	~Mascota();
	string getNombre();

	static string toString(Mascota* m);
	bool operator == (Mascota* m);
	static bool cmpNombreAs(Mascota* m1, Mascota* m2);
	string toString();
	string toJsonSimple();

};

