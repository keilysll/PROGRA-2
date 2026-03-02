#pragma once
#include<iostream>
#include<string>
using namespace std;
class Mascota
{
private:
	string nombre, raza;
public:
	Mascota(string _nom, string _raza);
	~Mascota();
	string getNombre();
	string getRaza();
	void setNombre(string _nom);
	void setRaza(string _raza);
	void mostrar();
};

