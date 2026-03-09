#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Cliente
{
private:
	string nombre;
	int ci;
	int fono;

public:
	Cliente(string nom, int ci, int fon);
	~Cliente();
	string getNom();
	int getCi();
	int getFono();
	string toJson();
};

