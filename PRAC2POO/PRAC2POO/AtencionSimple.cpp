#include "AtencionSimple.h"

AtencionSimple::AtencionSimple(int ind, Servicio* s , Cliente* c, Mascota* m):Atencion(ind)
{
	this->servicio = s;
	this->mascota = m;
	this->cliente = c;
}

AtencionSimple::~AtencionSimple()
{
}

int AtencionSimple::getInd()
{
	return ind;
}


string AtencionSimple::toJson()
{
	stringstream ss;
	ss<<"{\"AtencionSimple\":{\"id\":"<<ind<<",\"cliente\":{\"ci\":"<<cliente->getCi()<<",\"nombre\":\""<<cliente->getNombre()<<"\",\"fono\":"<<cliente->getFono()<<"},\"mascota\":"<<mascota->toJson()<<"},\"atencion\":"<<servicio->toJson()<<"}";
	return ss.str();
}
