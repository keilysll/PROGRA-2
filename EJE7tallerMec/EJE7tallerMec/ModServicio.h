#pragma once
#define CANT_MAX_SER 10
#include"Servicio.h"
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
	void ordenar();
	string toJson();


};

