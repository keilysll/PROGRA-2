#pragma once
#include "Jugador.h"
class ModJugador
{
private:
	int ind;
	int cant;
	Jugador** jugadores;
	
public:

	ModJugador(int cant);
	~ModJugador();
	void registrar(Jugador* j);
	Jugador* buscar(int ci);
	string toJson();
};

