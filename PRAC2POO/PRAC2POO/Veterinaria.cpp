#include "Veterinaria.h"

Veterinaria::Veterinaria()
{
}

Veterinaria::~Veterinaria()
{
}

void Veterinaria::registrar(Cliente* c)
{
	clientes.registrar(c);
}

void Veterinaria::registrar(int ci, Mascota* m)
{
	Cliente* c = clientes.buscar(ci);
	if (c != NULL)
	{
		c->registrar(m);
	}
}

void Veterinaria::registrarServicio(Servicio* s)
{
	servicios.registrar(s);
}

void Veterinaria::registrarAtencion(int ind, int codS, int ci, string nombreMas)
{
	Cliente* c = clientes.buscar(ci);
	Servicio* s = servicios.buscar(codS);
	Mascota* m = c->bucar(nombreMas);

	AtencionSimple* a = new AtencionSimple(ind, s, c, m);

	atenciones.registrar(a);
}

void Veterinaria::registrarAtencion(int ind, int codS1, int codS2, int ci, string nombreMas)
{
	Cliente* c = clientes.buscar(ci);
	Servicio* s1 = servicios.buscar(codS1);
	Servicio* s2 = servicios.buscar(codS2);
	Mascota* m = c->bucar(nombreMas);

	AtencionDoble* at = new AtencionDoble(ind, s1,s2, c, m);

	atenciones.registrar(at);

}

string Veterinaria::toJson()
{
	stringstream ss;
	ss << "{\"clientes\":" << clientes.toJson() << ",\"servicios\":"<<servicios.toJson()<<",\"atenciones\":"<<atenciones.toJson()<<"}";
	return ss.str();
}
