#include "Museo.h"

Museo::Museo(string nombre, string direccion)
{
	this->nombre = nombre;
	this->direccion = direccion;
}

Museo::~Museo()
{
}

void Museo::registrarExposicion(int nro)
{
	Exposicion* e = new Exposicion(nro);
	exposiciones.registrar(e);
}

void Museo::registrarArtistaEnExposicion(int nro, Artista* a)
{
	Exposicion* e = exposiciones.buscar(nro);
	if (e != NULL)
	{
		e->registrar(a);
	}

}

void Museo::registrarObraEnExposicion(int nro, string nombre, Obra* o)
{
	Exposicion* e = exposiciones.buscar(nro);

	if (e != NULL)
	{
		Artista* a = e->Buscar(nombre);

		if (a != NULL)
			a->registrar(o);
	}
}

string Museo::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"dirreccion\":\"" << direccion << "\",\"exposiciones\":" << exposiciones.toJson() <<"}";
	return ss.str();
}
