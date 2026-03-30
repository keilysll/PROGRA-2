#pragma once
#include"Docente.h"
#include"Estudiante.h"
#include"ModParticipante.h"

#define CANT_MAX_PARTI 10
class Conferencia
{
protected:
	int nro;
	int fecha;
	ModParticipante docentes;
	ModParticipante estudiantes;
	

public:
	
	Conferencia(int nro, int fecha);
	~Conferencia();
	int getNumero();
	void registrar(Docente* d);
	void registrar(Estudiante* p);
	virtual string toJson()=0;



};

