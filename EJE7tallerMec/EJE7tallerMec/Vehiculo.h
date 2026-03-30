#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Vehiculo
{
private:

	string placa;
	int km;
public:
	Vehiculo(string placa, int km);
	~Vehiculo();
	string getPlaca();
	string toJson();
};

