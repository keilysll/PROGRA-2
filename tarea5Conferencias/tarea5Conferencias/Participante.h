#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Participante
{
protected:
	string nombre;
public:
	Participante(string nombre);
	~Participante();
	string getNombre();
	virtual string toJson() = 0;


};

