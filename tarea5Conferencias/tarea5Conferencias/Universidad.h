#pragma once
#include "Conferencia.h"
#include "ConferenciaPresencial.h"
#include "ConferenciaVirtual.h"
#include"ModParticipante.h"
#include "Participante.h"
#include "Docente.h"
#include "Estudiante.h"
#define CANT_MAX_CONF 10
class Universidad
{
private:
	string nombre;
	string direccion;
	Conferencia** conferencias;
	int ind;

public:
	Universidad(string nombre, string direccion);
	~Universidad();
	string getNombre();
	void registrarConferenciaVirtual(int nro, int fecha, string link);
	void registrarConferenciaPresencial(int nro, int fecha, string lugar);
	Conferencia* buscar(int nro);
	void registrarParticipanteEnConferencia(int nro, Docente* d);
	void registrarParticipanteEnConferencia(int nro, Estudiante* e);
	string toJson();
};

