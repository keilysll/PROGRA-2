#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Avion
{
private:
	int codigo;
	int capacidad;
	string modelo;
public:
	Avion(int c, int cap, string m);
	~Avion();
	int getCod();
	int getCap();
	string getMod();
	string toJson();
};

