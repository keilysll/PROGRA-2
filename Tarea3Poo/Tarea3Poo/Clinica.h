#pragma once
#include"Cliente.h"
#include"SingletonClientes.h"
#include"Atencion.h"
#include"ListaArray.h"
#include"Reserva.h"
#include"ReservaMultiple.h"
#include"ReservaSimple.h"
class Clinica
{
private:
	ListaArray<Atencion> atenciones;
	ListaArray<Reserva> reservas;

public:
	Clinica();
	~Clinica();
	void registrarCliente(Cliente* c);
	Cliente* buscarCliente(int ci);
	string toString();
	void registrarAtencion(Atencion* a);
	void registrarReservaSimple(int id, int codAt, int ciCli, string nomMas);
	void registrarReservaMultiple(int id, int a1,int a2, int ciCli, string nomMas);

};

