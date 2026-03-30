#include "ConferenciaVirtual.h"

ConferenciaVirtual::ConferenciaVirtual(int nro, int fecha, string link):Conferencia(nro,fecha)
{
	this->link = link;
}

ConferenciaVirtual::~ConferenciaVirtual()
{
}

string ConferenciaVirtual::getLink()
{
	return link;
}

string ConferenciaVirtual::toJson()
{
	stringstream ss;
	ss<<"{\"numero\":"<<nro<<",\"fecha\":"<<fecha<<",\"link\":\""<<link<<"\",\"instructores\":" << docentes.toJson() << ",\"participantes\":" << estudiantes.toJson() << "}";
	return ss.str();
}
