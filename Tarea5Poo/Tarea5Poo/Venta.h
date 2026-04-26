#pragma once
#include"Producto.h"
#include"ListaArray.h"

class Venta
{
private:
	int nro;
	ListaArray<Producto>productos;

public:
	Venta(int nro);
	~Venta();
	int getNro();
	ListaArray<Producto>& getP();
	void registrarProducto(Producto* p);
	bool operator==(Venta* v);
	static string jsonProducto(Producto* p);
	string toJson();
	int calcularTotal();



};

