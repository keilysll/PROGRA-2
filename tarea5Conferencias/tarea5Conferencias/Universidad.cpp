
#include "Universidad.h"

Universidad::Universidad(string nombre, string direccion)
{
	this->nombre = nombre;
	this->direccion = direccion;
	ind = 0;
	conferencias = new Conferencia * [CANT_MAX_CONF];

}

Universidad::~Universidad()
{
}

string Universidad::getNombre()
{
	return nombre;
}

void Universidad::registrarConferenciaVirtual(int nro, int fecha, string link)
{
	if(ind < CANT_MAX_CONF)
	{ 
	conferencias[ind] = new ConferenciaVirtual(nro, fecha, link);
	ind++;
	}
}

void Universidad::registrarConferenciaPresencial(int nro, int fecha, string lugar)
{
	if (ind < CANT_MAX_CONF)
	{
		conferencias[ind] = new ConferenciaPresencial(nro, fecha, lugar);
		ind++;
	}
}

Conferencia* Universidad::buscar(int nro)
{
	for (int i = 0; i < ind; i++)
	{
		if (conferencias[i]->getNumero() == nro)
		{
			return conferencias[i];
		}

	}
	return NULL;
}

void Universidad::registrarParticipanteEnConferencia(int nro, Docente* d)
{
	Conferencia* c = buscar(nro);

	if (c != NULL)
	{
		c->registrar(d);
	}
}

void Universidad::registrarParticipanteEnConferencia(int nro, Estudiante* e)
{
	Conferencia* c = buscar(nro);

	if (c != NULL)
	{
		c->registrar(e);
	}
	
}

string Universidad::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\"" << nombre << "\",\"direccion\":\"" << direccion << "\",\"conferencias\":[";

	for (int i = 0; i < ind; i++)
	{
		ss << conferencias[i]->toJson();

		if (i < ind - 1)
			ss << ",";
	}

	ss << "]}";

	return ss.str();
}

