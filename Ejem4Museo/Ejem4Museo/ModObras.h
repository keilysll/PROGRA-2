#pragma once
#include"Obra.h"
#define CANT_MAX_OBR 10
class ModObras
{
private:

	Obra** obras;
	int ind;

public:
	ModObras();
	~ModObras();
	void registrar(Obra* o);
	Obra* buscar(string titulo);
	string toJson();

};

