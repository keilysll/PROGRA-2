#include "PrestamoSimple.h"

PrestamoSimple::PrestamoSimple(int id, Socio* socios, Libro* libros, int fechaIni, int fechaDev):Prestamo(id,socios,libros,fechaIni,fechaDev)
{
}

PrestamoSimple::~PrestamoSimple()
{
}

int PrestamoSimple::getId()
{
	return id;
}

string PrestamoSimple::toString()
{
	stringstream ss;
	ss << "{\"PrestamoSimple\":{\"id\":" << id << ",\"socio\":" << socios->toString() << ",\"libro\":" << libros->toString() << ",\"fechaInicio\":" << fechaIni << ",\"fechaDevolucion\":" << fechaDev << "}}";
	return ss.str();
}
