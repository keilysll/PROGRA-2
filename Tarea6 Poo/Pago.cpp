#include "Pago.h"

Pago::Pago(int monto,int fecha)
{
	this->fecha = fecha;
	this->monto = monto;
}

Pago::~Pago()
{
}

int Pago::getFech()
{
	return fecha;
}

bool Pago::cmpMonto(Pago* p1, Pago* p2)
{
	return p1->monto < p2->monto;
}

string Pago::toString()
{
	stringstream ss;
	ss << "{\"monto\":" << monto<< ",\"fecha\":" << fecha << "}";
	return ss.str();
}

string Pago::toString(Pago* p)
{
	return p->toString();
}
