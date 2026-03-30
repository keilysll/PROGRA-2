#include "ModAtenciones.h"



ModAtenciones::ModAtenciones()
{
	ind = 0;
	atenciones = new Atencion * [CANT_MAX_ATE];
}

ModAtenciones::~ModAtenciones()
{
	delete[]atenciones;
}

void ModAtenciones::registrar(Atencion* a)
{
	if (ind < CANT_MAX_ATE)
	{
		atenciones[ind] = a;
		ind++;
	}
}

string ModAtenciones::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << atenciones[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
