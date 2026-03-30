#pragma once
#include"ModArtista.h"
#include"Artista.h"
#include"Pintor.h"
#include"Escultor.h"
#include"ModObras.h"
#include"Obra.h"
#include"Exposicion.h"
#include"ModExp.h"
class Museo
{
private:
	string nombre;
	string direccion;
	ModExp exposiciones;
public:
	Museo(string nombre, string direccion);
	~Museo();
	void registrarExposicion(int nro);
	void registrarArtistaEnExposicion(int nro, Artista* a);
	void registrarObraEnExposicion(int nro, string nombre, Obra* o);
	string toJson();


};

