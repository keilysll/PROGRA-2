#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Cliente
{
protected:
	string nombre;
	string tipo;
	int ci;
	
public:
	Cliente(int ci,string nombre,string tipo);
	~Cliente();
	int getCi();
	virtual string toString() = 0;
};

