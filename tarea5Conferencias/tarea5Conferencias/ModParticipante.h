#pragma once
#include"Participante.h"
#define CANT_MAX 10
class ModParticipante
{
private:
	int ind;
	Participante** participantes;
public:
	ModParticipante();
	~ModParticipante();
	void registrar(Participante* p);
	Participante* buscarNom(string nombre);
	string toJson();


};

