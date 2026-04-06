#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Cliente
{
private:
	string nombre;
public:
	Cliente(string nombre);
	~Cliente();
	string getNombre();
	string toJson();
};

