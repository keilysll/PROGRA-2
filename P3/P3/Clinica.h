#pragma once
#include"Lista.h"
#include"Atencion.h"
#include"Cliente.h"
#include"Mascota.h"
#include"SingletonClientes.h"
#include"Reserva.h"
#include"ReservaSimple.h"
#include"ReservaMultiple.h"

class Clinica
{
private:
	Lista<Atencion>atenciones;
	Lista<Reserva>reservas;
public:
	Clinica();
	~Clinica();
	void registrarAtencion(Atencion* a);
	void registrarReservaSimple(int id, int codA1, int ciCli, string masc);
	void registrarReservaMultiple(int id, int codA1,int codA2, int ciCli, string masc);
	string toString();

};

