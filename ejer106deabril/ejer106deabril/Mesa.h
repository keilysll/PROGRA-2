#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Mesa
{
private:
	string codigo;
	int cap;
public:
	Mesa(string codigo,int cap);
	~Mesa();
	string getCod();
	string toJson();
};

