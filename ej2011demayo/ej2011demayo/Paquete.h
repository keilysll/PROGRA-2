#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Paquete
{
protected:
	int cant;
	string tipo;

public:
	Paquete(int cant);
	~Paquete();
	static string toJson(Paquete* p);
	virtual string toJson();
};

