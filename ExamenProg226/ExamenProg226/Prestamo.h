#pragma once
#include"Libro.h"
#include"Socio.h"
class Prestamo
{
protected:
	int id;
	Socio* socios;
	Libro* libros;
	int fechaIni;
	int fechaDev;
public:
	Prestamo(int id,Socio* socios,Libro* libros,int fechaIni,int fechaDev);
	~Prestamo();
	int getId();
	Libro* getlibro();
	static bool ComId(Prestamo* p1, Prestamo* p2);
	bool operator==(Prestamo* p);
	static string toStringPres(Prestamo* p);
	virtual string toString()=0;
	int getFechIni();
	int getFechDev();

};

