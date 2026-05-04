#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"Atencion.h"
#include"Cliente.h"
#include"Mascota.h"
using namespace std;
class Reserva
{
protected:
	int id;
	Atencion* a1;
	Cliente* c;
	Mascota* m;

public:
	Reserva(int id, Atencion* a1,Cliente* c, Mascota* m);
	~Reserva();
	virtual string toString() = 0;
	static string toString(Reserva* r);
};

