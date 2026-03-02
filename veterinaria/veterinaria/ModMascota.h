#pragma once
#include"Mascota.h"
class ModMascota
{
private:
	int tam;
	int ind;
	Mascota** mascotas;

public:
	ModMascota(int tam);
	~ModMascota();
	void registrarMascota(Mascota* m);
	Mascota* buscarMascota(string nombre);
	void mostrarMascota();
	int getInd();
};

