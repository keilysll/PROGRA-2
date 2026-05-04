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
	static string toString(Mascota* m);
	static bool CmpNom(Mascota* m1, Mascota* m2);
	bool operator==(Mascota* m);
	string toString();
};

