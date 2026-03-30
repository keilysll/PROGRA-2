#pragma once
#include "Exposicion.h"
#define CANT_MAX_EXP 10
class ModExp
{
private:
	Exposicion** exp;
	int ind;
public:
	ModExp();
	~ModExp();
	void registrar(Exposicion* e);
	Exposicion* buscar(int nro);
	string toJson();

};

