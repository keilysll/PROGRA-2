#include "Taller.h"

Taller::Taller()
{
}

Taller::~Taller()
{
}

void Taller::registrar(Cliente* c)
{
	clientes.registrar(c);
}

void Taller::registrar(int ci, Vehiculo* v)
{
	Cliente* c = clientes.buscar(ci);
	if (c != NULL)
	{
		c->registrar(v);
	}
}

void Taller::registrarServicio(Servicio* s)
{
	servicios.registrar(s);
}

void Taller::registrarReserva(int id, int codigoSer, int ci, string placa)
{
	Cliente* c = clientes.buscar(ci);
	Servicio* s = servicios.buscar(codigoSer);
	Vehiculo* v = c->buscar(placa);

	ReservaSimple* r = new ReservaSimple(id,s,c, v);
	reservas.registrar(r);
}

void Taller::registrarReserva(int id, int codS1, int codS2, int ci, string placa)
{
	Cliente* c = clientes.buscar(ci);
	Servicio* s1 = servicios.buscar(codS1);
	Servicio* s2 = servicios.buscar(codS2);
	Vehiculo* v = c->buscar(placa);

	ReservaComb* r = new ReservaComb(id, s1,s2, c, v);
	reservas.registrar(r);

}


string Taller::toJson()
{
	stringstream ss;
	ss << "{\"clientes\":" << clientes.toJson() <<",\"servicios\":"<<servicios.toJson()<<",\"reservas\":"<<reservas.toJson()<<"}";
	return ss.str();
}