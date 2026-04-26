#include "Venta.h"

Venta::Venta(int nro):productos(10)
{
	this->nro = nro;
}

Venta::~Venta()
{
}

int Venta::getNro()
{
	return nro;
}

ListaArray<Producto>& Venta::getP()
{
	return productos;
}

void Venta::registrarProducto(Producto* p)
{
	productos.registrar(p);
}

bool Venta::operator==(Venta* v)
{
	return this->nro == v->nro;
}

string Venta::jsonProducto(Producto* p)
{
   return p->toJson();
}


string Venta::toJson()
{
	stringstream ss;
	ss << "{\"numero\":"<<nro<<",\"productos\":"<<productos.toJson(jsonProducto)<<"}";
	return ss.str();
}

int Venta::calcularTotal()
{
	int total = 0;

		for (int i = 0; i < productos.getInd(); i++)
		{
			total += productos.get(i)->getPrecioTotal();
		}

		return total;

}
