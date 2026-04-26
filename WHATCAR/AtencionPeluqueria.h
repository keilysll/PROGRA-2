#pragma once
#include "Atencion.h"
class AtencionPeluqueria : public Atencion
{
private:
	int duracionEnMinutos;
public:
	AtencionPeluqueria(int codigo, string descripcion, int costo, int duracionEnMinutos);
	~AtencionPeluqueria();
	int getDuracionMinutos();
	string toJson();
};

