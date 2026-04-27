#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Voluntario
{
protected:
	int ci;
	string nombre;
public:
	Voluntario(int ci,string nombre);
	~Voluntario();
	int getCi();
	virtual string toString() = 0;
	static bool cmpCi(Voluntario* a, Voluntario* b);
	static string toString(Voluntario* v);

};

