#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Telefonica
{
private:
	string nombre;
	string direccion;
public:
	Telefonica(string nombre,string direccion);
	~Telefonica();
	string toJson();
};

