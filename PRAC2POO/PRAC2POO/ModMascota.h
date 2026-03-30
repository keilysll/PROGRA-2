#pragma once
#include"Mascota.h"
#define CANT_MAX_MAS 10
class ModMascota
{
private:
	Mascota** mascotas;
	int ind;
public:
	ModMascota();
	~ModMascota();
	void registrar(Mascota* m);
	Mascota* buscar(string nombre);
	string toJson();

};

