#include "ModExp.h"


ModExp::ModExp()
{
	ind = 0;
	exp = new Exposicion * [CANT_MAX_EXP];
}

ModExp::~ModExp()
{
	delete[]exp;
}

void ModExp::registrar(Exposicion* e)
{
	if (ind < CANT_MAX_ART)
	{
		exp[ind] = e;
		ind++;
	}
}

Exposicion* ModExp::buscar(int nro)
{
	for (int i = 0; i < ind; i++)
	{
		if (exp[i]->getNro() == nro)
		{
			return exp[i];
		}
	}
	return	NULL;
}

string ModExp::toJson()
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << exp[i]->toJson();
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
