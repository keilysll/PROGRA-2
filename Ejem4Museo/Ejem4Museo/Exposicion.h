#pragma once
#include"ModArtista.h"
#include"Artista.h"
#include"Pintor.h"
#include"Escultor.h"
#include"ModObras.h"
#include"Obra.h"

class Exposicion
{
private:
	int nro;
	ModArtista artistas;
public:
	Exposicion(int nro);
	~Exposicion();
	void registrar(Artista* a);
	int getNro();
	Artista* Buscar(string nombre);

	string toJson();

};

