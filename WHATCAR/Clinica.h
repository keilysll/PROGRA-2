#pragma once
#include "ModGen.h"
#include "AtencionMedica.h"
#include "AtencionPeluqueria.h"
#include "ReservaMultiple.h"
#include "ReservaSimple.h"
#include "SingletonClientes.h"
class Clinica
{
private:
	ModGen<Atencion> atenciones;
	ModGen<Reserva> reservas;
public:
	Clinica();
	~Clinica();
	ModGen<Atencion>& GetAtenciones();
	ModGen<Reserva>& GetReservas();
	void registrarReservaSimple(int idReserva, int codigoAtencion, int ciCliente, string nombreMascota);
	void registrarReservaMultiple(int idReserva, int codigoAtencion1, int codigoAtencion2, int ciCliente, string nombreMascota);
	void registrarAtencion(Atencion* atencion);
	string toString();
};

