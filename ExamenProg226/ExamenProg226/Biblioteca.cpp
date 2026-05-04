#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
}

Biblioteca::~Biblioteca()
{
}

void Biblioteca::operator<<(Libro* l)
{
	libros.registrar(l);
}

Libro* Biblioteca::operator[](int posicion)
{
	return libros[posicion];
}

Libro* Biblioteca::buscar(int cod)
{
	Libro Codbus(cod);
	Libro* cEncontrado = libros.buscar(&Codbus);
	return cEncontrado;
}

void Biblioteca::registrarPrestamoSimple(int id, int codLibro, int ci, int fechaIni, int fechaDev)
{
	Libro* l = buscar(codLibro);
	Socio* s = SingletonSocios::getInst().buscar(ci);
	if (l != NULL && s != NULL)
	{
		prestamos.registrar(new PrestamoSimple(id, s, l, fechaIni, fechaDev));
	}
}

void Biblioteca::registrarPrestamoRenovado(int id, int codLibro, int ci, int fechaIni, int fechaDev, int nuevaFech, string motivo)
{
	Libro* l = buscar(codLibro);
	Socio* s = SingletonSocios::getInst().buscar(ci);
	if (l != NULL && s != NULL)
	{
		prestamos.registrar(new PrestamoRenovado(id, s, l, fechaIni, fechaDev, nuevaFech, motivo));
	}
	
}

string Biblioteca::toString()
{
	libros.ordenar(Libro::CompCod);
	prestamos.ordenar(Prestamo::ComId);
	stringstream ss;
	ss << "{\"libros\":" << libros.toJson(Libro::toString) << ",\"prestamos\":" << prestamos.toJson(Prestamo::toStringPres) << "}";
	return ss.str();
}

string Biblioteca::libroMasPrestado()
{
	{
		int max = 0;
		Libro* libroTop = NULL;

		for (int i = 0; i < prestamos.getTam(); i++)
		{
			Libro* actual = prestamos[i]->getlibro();
			int contador = 0;

			for (int j = 0; j < prestamos.getTam(); j++)
			{
				if (prestamos[j]->getlibro()->getCod() == actual->getCod())
				{
					contador++;
				}
			}

			if (contador > max)
			{
				max = contador;
				libroTop = actual;
			}
		}

		if (libroTop != NULL)
			return libroTop->toString();

		return "";
	}
}
int Biblioteca::periodoMaximo()
{
	int max = 0;

	for (int i = 0; i < prestamos.getTam(); i++)
	{
		int ini = prestamos[i]->getFechIni();
		int fin = prestamos[i]->getFechDev();

		int ai = ini / 10000;
		int mi = (ini / 100) % 100;
		int di = ini % 100;

		int af = fin / 10000;
		int mf = (fin / 100) % 100;
		int df = fin % 100;

		int dias = (af - ai) * 360 + (mf - mi) * 30 + (df - di);

		if (dias > max)
		{
			max = dias;
		}
	}

	return max;
}
