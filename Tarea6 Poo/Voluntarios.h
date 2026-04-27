#pragma once
#include"Lista.h"
#include"Voluntario.h"
#include"Asistente.h"
#include"Padrino.h"

class Voluntarios
{
private:
	Lista<Voluntario>voluntarios;
public:
	static Voluntarios& getInst();
	~Voluntarios();
	void registrar(Voluntario* v);
	string toString();
	
private:
	Voluntarios();


};

