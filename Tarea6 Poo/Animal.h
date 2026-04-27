#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Animal
{
protected:
	int codigo;
	string especie;
	int edad;

public:
	Animal(int codigo);
	Animal(int codigo, string especie,int edad);
	~Animal();
	int getCod();
	virtual string toString();
	bool operator==(Animal* a);
	static bool cmpCodigo(Animal* a1, Animal* a2);
	static string toString(Animal* a);
};

