#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Mesa
{
private:
	string codigo;
	int capac;
public:
	Mesa(string codigo,int capac);
	~Mesa();
	string getCod();
	string toJson();
};

