#include "PrestamoRenovado.h"

PrestamoRenovado::PrestamoRenovado(int id, Socio* socios, Libro* libros, int fechaIni, int fechaDev, int nuevaFech, string motivo):Prestamo(id,socios,libros,fechaIni,fechaDev)
{
	this->nuevaFech = nuevaFech;
	this->motivo = motivo;
}

PrestamoRenovado::~PrestamoRenovado()
{
}

int PrestamoRenovado::getInd()
{
	return id;
}

string PrestamoRenovado::toString()
{
	stringstream ss;
	ss << "{\"PrestamoRenovado\":{\"id\":" << id << ",\"socio\":" << socios->toString() << ",\"libro\":" << libros->toString() << ",\"fechaInicio\":" << fechaIni << ",\"fechaDevolucion\":" << fechaDev << "},\"nuevaFecha\":" << nuevaFech << ",\"motivo\":\"" << motivo << "\"}";
	return ss.str();
}
