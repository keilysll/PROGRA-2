#pragma once
#include"Atencion.h"
#define CANT_MAX_ATE 10
class ModAtenciones
{
private:
	Atencion** atenciones;
	int ind;
public:
	ModAtenciones();
	~ModAtenciones();
	void registrar(Atencion* a);
	string toJson();
};

