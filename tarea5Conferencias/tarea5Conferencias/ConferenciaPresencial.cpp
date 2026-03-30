#include "ConferenciaPresencial.h"

ConferenciaPresencial::ConferenciaPresencial(int nro, int fecha, string lugar):Conferencia(nro,fecha)
{
	this->lugar = lugar;
	
}

ConferenciaPresencial::~ConferenciaPresencial()
{
}

string ConferenciaPresencial::getLugar()
{
	return lugar;
}

string ConferenciaPresencial::toJson()
{
   
    stringstream ss;
	ss << "{\"numero\":" << nro << ",\"fecha\":" << fecha << ",\"lugar\":\"" << lugar << "\",\"instructores\":" << docentes.toJson()<<",\"participantes\":" << estudiantes.toJson()<<"}";
	return ss.str();
}



