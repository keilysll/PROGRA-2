#include "AtencionDoble.h"



AtencionDoble::AtencionDoble(int ind, Servicio* s1, Servicio* s2, Cliente* c, Mascota* m):Atencion(ind)
{
	this->servicio1 = s1;
	this->servicio2 = s2;
	this->mascota = m;
	this->cliente = c;
}

AtencionDoble::~AtencionDoble()
{
}

int AtencionDoble::getInd()
{
	return ind;
}

string AtencionDoble::toJson()
{
	stringstream ss;
	{
		ss << "{\"AtencionPaquete\":{\"id\":" << ind << ",\"cliente\":{\"ci\":" << cliente->getCi() << ",\"nombre\":\"" << cliente->getNombre() << "\",\"fono\":" << cliente->getFono() << "},\"mascota\":" << mascota->toJson() << "},\"atencion1\":" << servicio1->toJson() << ",\"atencion2\":" << servicio2->toJson() << "}";
		return ss.str();
	}

}



