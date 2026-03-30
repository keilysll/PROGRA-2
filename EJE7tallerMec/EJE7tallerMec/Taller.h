#pragma once
#include"Cliente.h"
#include"ModCliente.h"
#include"Vehiculo.h"
#include"ModVehiculo.h"
#include"ModServicio.h"
#include"Servicio.h"
#include"ReservaSimple.h"
#include"ReservaComb.h"
#include"Reserva.h"
#include"ModReservaSimple.h"

class Taller
{
private:
	ModCliente clientes;
	ModServicio servicios;
	ModReservaSimple reservas;
	
public:
	Taller();
	~Taller();
	void registrar(Cliente* c);
	void registrar(int ci, Vehiculo* v);
	void registrarServicio(Servicio* s);
	void registrarReserva(int id, int codigoSer, int ci, string placa);
	void registrarReserva(int id, int codS1, int codS2, int ci, string placa);
	string toJson();


	
};

