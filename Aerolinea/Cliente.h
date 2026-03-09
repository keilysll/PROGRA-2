#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Cliente
{
private:
	string nombre;
	int ci;
	int  telef;
public:
	Cliente(string n, int c, int t);
	~Cliente();
	string getNom();
	int getCi();
	int getTele();
	string toJson();

};

