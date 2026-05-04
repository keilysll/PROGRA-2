#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Socio
{private:
	int ci;
	string nombre;
	string email;
public:
	Socio(int ci);
	Socio(int ci, string nombre,string email);
	~Socio();
	int getCi();
	static string toString(Socio* s);
	bool operator==(Socio* s);
	static bool CompNom(Socio* s1, Socio* s2);
	string toString();
};

