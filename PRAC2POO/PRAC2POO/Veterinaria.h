#pragma once
#include"Cliente.h"
#include"Mascota.h"
#include"ModCliente.h"
#include"ModMascota.h"
#include"Servicio.h"
#include"Vacuna.h"
#include"Consulta.h"
#include"ModServicio.h"
#include"Atencion.h"
#include"AtencionSimple.h"
#include"ModAtenciones.h"
#include"AtencionDoble.h"


class Veterinaria
{
private:
	ModCliente clientes;
	ModServicio servicios;
	ModAtenciones atenciones;
public:
	Veterinaria();
	~Veterinaria();
	void registrar(Cliente* c);
	void registrar(int ci, Mascota* m);
	void registrarServicio(Servicio* s);
	void registrarAtencion(int ind, int codS, int ci, string nombreMas);
	void registrarAtencion(int ind, int codS1,int codS2, int ci, string nombreMas);

	string toJson();

};

