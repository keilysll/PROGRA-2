#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Pago
{
private:
	int fecha;
	int monto;
public:
	Pago(int monto, int fecha);
	~Pago();
	int getFech();
	static bool cmpMonto(Pago* p1, Pago* p2);
	string toString();
	static string toString(Pago* p);
	
};

