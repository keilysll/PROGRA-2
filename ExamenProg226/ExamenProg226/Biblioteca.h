#pragma once
#include"Lista.h"
#include"Libro.h"
#include"Prestamo.h"
#include"PrestamoSimple.h"
#include"PrestamoRenovado.h"
#include"SingletonSocios.h"
class Biblioteca
{
private:
	Lista<Libro>libros;
	Lista<Prestamo>prestamos;
public:
	Biblioteca();
	~Biblioteca();
	void operator<<(Libro* l);
	Libro* operator[](int posicion);
	Libro* buscar(int cod);
	void registrarPrestamoSimple(int id, int codLibro, int ci,int fechaIni, int fechaDev);
	void registrarPrestamoRenovado(int id, int codLibro, int ci,int fechaIni, int fechaDev,int nuevaFech,string motivo);
	string toString();
	string libroMasPrestado();
	int periodoMaximo();
};

