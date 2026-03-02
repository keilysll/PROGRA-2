#pragma once

#include "ModJugador.h"
#define CANT_MAX_JUG 10
class Asociacion
{
private:

	string nombre;
	ModJugador jugadores;


public:

	Asociacion(string nom);
		~Asociacion();

		ModJugador& getJugador();
		string toJson();
		void mostrar();

};

