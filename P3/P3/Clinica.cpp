#include "Clinica.h"

Clinica::Clinica()
{
}

Clinica::~Clinica()
{
}

void Clinica::registrarAtencion(Atencion* a)
{
	atenciones.registrar(a);
}

void Clinica::registrarReservaSimple(int id, int codA1, int ciCli, string masc)
{
	Cliente* c = SingletonClientes::getInst().buscar(ciCli);
	Mascota* m = c->getMascotas().buscar(new Mascota(masc));
	Atencion* a1 = atenciones.buscar(new Atencion(codA1));
	reservas.registrar(new ReservaSimple(id,a1,c,m));
}

void Clinica::registrarReservaMultiple(int id, int codA1, int codA2, int ciCli, string masc)
{
	Cliente* c = SingletonClientes::getInst().buscar(ciCli);
	Mascota* m = c->getMascotas().buscar(new Mascota(masc));
	Atencion* a1 = atenciones.buscar(new Atencion(codA1));
	Atencion* a2 = atenciones.buscar(new Atencion(codA2));
	reservas.registrar(new ReservaMultiple(id, a1,a2, c, m));
	
}

string Clinica::toString()
{
	atenciones.ordenar(Atencion::CmpCod);
	stringstream ss;
	ss << "{\"atenciones\":" << atenciones.toJson(Atencion::toString) << ",\"reservas\":"<<reservas.toJson(Reserva::toString)<<"}";
	return ss.str();
}
