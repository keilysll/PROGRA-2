#pragma once
#include"Artista.h"
#define CANT_MAX_ART 10
class ModArtista
{
private:
	Artista** artistas;
	int ind;
public:
	ModArtista();
	~ModArtista();
	void registrar(Artista* a);
	Artista* buscar(string nombre);
	string toJson();

};

