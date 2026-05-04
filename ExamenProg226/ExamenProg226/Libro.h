#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Libro
{
protected:
	int codigo;
	string titulo;
	string autor;
	string tipo;
public:
	Libro(int codigo);
	Libro(int codigo, string titulo,string autor);
	~Libro();
	int getCod();
	virtual string toString();
	static string toString(Libro* l);
	bool operator==(Libro* l);
	static bool CompCod(Libro* l1, Libro* l2);

};

