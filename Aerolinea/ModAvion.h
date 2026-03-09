#pragma once
#include"Avion.h"
class ModAvion
{
private:
	int ind;
	int tam;
	Avion** aviones;

public:
	ModAvion(int tam);
	~ModAvion();
	int getInd();
	int getTam();
	void registrar(Avion* a);
	Avion* buscar(int codigo);
	string toJson();



};

