#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Mascota
{
private:
	string nombre;
	int edad;
public:
	Mascota(string nombre,int edad);
	Mascota(string nombre);
	~Mascota();

	string toJson();
	static string toStatic(Mascota* mascota);
	bool operator==(Mascota* mascota);
	static bool comparacionNombre(Mascota* mascota1, Mascota* mascota2);
};

