#pragma once
#include <iostream>
#include <string>
#include<sstream>
using namespace std;

class Jugador
{
private:
	int ci;
	int fono;
	string nombre;
public:

	Jugador(int _ci, int _fono, string _nombre);
	~Jugador();
	int getCi();
	int getFono();
	string getNombre();
	string toJson();
};

