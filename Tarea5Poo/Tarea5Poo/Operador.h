#pragma once
#include"Producto.h"
#include"Tv.h"
#include"Telefonia.h"
#include"Internet.h"
#include"ListaArray.h"
#include"Venta.h"
#include "Packs.h"
#include "PackSSilver.h"
#include "PackGGold.h"
class Operador
{
private:
	string nombre;
	ListaArray<Producto>productos;
	ListaArray<Venta>ventas;
public:
	Operador(string nombre);
	~Operador();
	void registrarProducto(string nombre, int precio, string descripccion, string canales);
	void registrarProducto(string nombre, int precio, string descripccion, int minutos);
	void registrarProducto(string nombre, int precio, string descripccion, int velSubida, int velBajada);
	void registrarVenta(int nro);
	void registrarProductoEnVenta(int nro, string nombre);
	static string toJsonVenta(Venta* v);
	static string toJsonPr(Producto* p);
	void registrarPack(string nombre, int precio, string nomInternet, string nomTV);
	void registrarPack(string nombre, int precio, string nomInternet, string nomTV, string nomTel);
	int  calcularGanancias();
	string toJson();
};


