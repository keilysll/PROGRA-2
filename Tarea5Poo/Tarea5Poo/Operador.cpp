#include "Operador.h"

Operador::Operador(string nombre):productos(10),ventas(10)
{
	this->nombre = nombre;
}

Operador::~Operador()
{
}

void Operador::registrarProducto(string nombre, int precio, string descripccion, string canales)
{
	productos.registrar(new Tv(nombre, precio, descripccion, canales));
}

void Operador::registrarProducto(string nombre, int precio, string descripccion, int minutos)
{
	productos.registrar(new Telefonia(nombre, precio, descripccion, minutos));
}

void Operador::registrarProducto(string nombre, int precio, string descripccion, int velSubida, int velBajada)
{
	productos.registrar(new Internet(nombre, precio, descripccion, velSubida, velBajada));
}

void Operador::registrarVenta(int nro)
{
	ventas.registrar(new Venta(nro));
}

void Operador::registrarProductoEnVenta(int nro, string nombre)
{

		Venta* v = ventas.buscar(new Venta(nro));
		Producto* p = productos.buscar(new Producto(nombre));

		if (v && p)
		{
			v->registrarProducto(p);
		}

}

string Operador::toJsonVenta(Venta* v)
{
	return v->toJson();
}

string Operador::toJsonPr(Producto* p)
{
	return p->toJson();
}

void Operador::registrarPack(string nombre, int precio, string nomInternet, string nomTV)
{
	Producto* i = productos.buscar(new Internet(nomInternet)); 
	Producto* t = productos.buscar(new Tv(nomTV));
	productos.registrar(new PackSSilver(nombre, precio, i, t));

}

void Operador::registrarPack(string nombre, int precio, string nomInternet, string nomTV, string nomTel)
{
	Producto* i = productos.buscar(new Internet(nomInternet));
	Producto* t = productos.buscar(new Tv(nomTV));
	Producto* tel = productos.buscar(new Telefonia(nomTel));
	productos.registrar(new PackGGold(nombre, precio, i, t, tel));
}

int Operador::calcularGanancias()
{
	int total = 0;
	for (int i = 0; i < ventas.getInd(); i++)
	{
		total += ventas.get(i)->calcularTotal();
	}
	return total;
}

string Operador::toJson()
{
	stringstream ss;
	ss << "{\"nombre\":\""<<nombre<<"\",\"productos\":"<<productos.toJson(toJsonPr)<<",\"ventas\":"<<ventas.toJson(toJsonVenta)<<"}";
	return ss.str();
}
