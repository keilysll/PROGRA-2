#include "Voluntarios.h"

Voluntarios& Voluntarios::getInst()
{
	static Voluntarios inst;
	return inst;
}

Voluntarios::~Voluntarios()
{
	
}

void Voluntarios::registrar(Voluntario* v)
{
	voluntarios.registrar(v);
}

string Voluntarios::toString()
{
	voluntarios.ordenar(Voluntario::cmpCi);
    stringstream ss;
    ss << "{\"voluntarios\":[";

    int i = 0;
    while (voluntarios[i] != NULL)
    {
        ss << voluntarios[i]->toString();
        if (voluntarios[i + 1] != NULL)
            ss << ",";
        i++;
    }

    ss << "]}";
    return ss.str();
}

Voluntarios::Voluntarios()
{
}