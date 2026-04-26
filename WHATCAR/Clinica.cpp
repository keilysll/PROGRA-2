#include "Clinica.h"

Clinica::Clinica()
{
}

Clinica::~Clinica()
{
}

ModGen<Atencion>& Clinica::GetAtenciones()
{
	return atenciones;
}

ModGen<Reserva>& Clinica::GetReservas()
{
	return reservas;
}

void Clinica::registrarReservaSimple(int idReserva, int codigoAtencion, int ciCliente, string nombreMascota)
{
	Cliente* cliente = SingletonClientes::getInst().getClientes().buscar(new Cliente(ciCliente));
	Mascota* mascota = cliente->getMascotas().buscar(new Mascota(nombreMascota));
	Atencion* atencion = atenciones.buscar(new Atencion(codigoAtencion));
	if (cliente != NULL && mascota != NULL && atencion != NULL)
	{
		reservas.registrar(new ReservaSimple(idReserva, atencion, cliente, mascota));
	}
}

void Clinica::registrarReservaMultiple(int idReserva, int codigoAtencion1, int codigoAtencion2, int ciCliente, string nombreMascota)
{
	Cliente* cliente = SingletonClientes::getInst().getClientes().buscar(new Cliente(ciCliente));
	Mascota* mascota = cliente->getMascotas().buscar(new Mascota(nombreMascota));
	Atencion* atencion1 = atenciones.buscar(new Atencion(codigoAtencion1));
	Atencion* atencion2 = atenciones.buscar(new Atencion(codigoAtencion2));
	if (cliente != NULL && mascota != NULL && atencion1 != NULL && atencion2 != NULL)
	{
		reservas.registrar(new ReservaMultiple(idReserva, atencion1, atencion2, cliente, mascota));
	}
}

void Clinica::registrarAtencion(Atencion* atencion)
{
	atenciones.registrar(atencion);
}

string Clinica::toString()
{
	stringstream ss;
	atenciones.ordenar(Atencion::comparacionCodigo);
	ss << "{\"atenciones\":" << atenciones.toJson(Atencion::toStatic)
		<< ",\"reservas\":" << reservas.toJson(Reserva::toStatic) << "}";
	return ss.str();
}
