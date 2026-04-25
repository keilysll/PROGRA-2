#include "Clinica.h"

Clinica::Clinica():atenciones(10),reservas(10)
{
}

Clinica::~Clinica()
{
}

void Clinica::registrarCliente(Cliente* c)
{
	SingletonClientes::getInst().registrar(c);
}

Cliente* Clinica::buscarCliente(int ci)
{
	return SingletonClientes::getInst().buscar(ci);
}

string Clinica::toString()
{
	atenciones.ordenar(Atencion::cmpCodigoAsc);
	stringstream ss;
	ss << "{\"atenciones\":" << atenciones.toJson(Atencion::toString) << ",\"reservas\":" << reservas.toJson(Reserva::toString) << "}";
    return ss.str();
}


void Clinica::registrarAtencion(Atencion* a)
{
	atenciones.registrar(a);
}

void Clinica::registrarReservaSimple(int id, int codAt, int ciCli, string nomMas)
{
	Cliente* c = SingletonClientes::getInst().buscar(ciCli);
	Mascota* m = c->getMascotas().buscar(new Mascota(nomMas));
	Atencion* a = atenciones.buscar(new Atencion(codAt));
	reservas.registrar(new ReservaSimple(id, a,c, m));

}

void Clinica::registrarReservaMultiple(int id, int a1, int a2, int ciCli, string nomMas)
{
	Cliente* c = SingletonClientes::getInst().buscar(ciCli);
	Mascota* m = c->getMascotas().buscar(new Mascota(nomMas));
	Atencion* at1 = atenciones.buscar(new Atencion(a1));
	Atencion* at2 = atenciones.buscar(new Atencion(a2));
	reservas.registrar(new ReservaMultiple(id, at1,at2, c, m));
}
