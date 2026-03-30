#pragma once
#include"Servicio.h"
#define CANT_MAX_SER 10
class ModServicio
{
private:
	Servicio** servicios;
	int ind;
public:
	ModServicio();
	~ModServicio();
	void registrar(Servicio* s);
	Servicio* buscar(int codigo);
	string toJson();


};

