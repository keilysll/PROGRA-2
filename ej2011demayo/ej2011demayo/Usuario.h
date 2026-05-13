#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#include"Lista.h"
#include"Paquete.h"
#include"Detalle.h"
#include"Llamada.h"
#include"PaqueteMinutos.h"
#include"PaqueteMegas.h"



class Usuario
{
private:
	string nombre;
	int saldo;
	Lista<Paquete> paquetes;
	Lista<Detalle> detalles;

public:
	Usuario(string nombre, int saldo);
	~Usuario();
	string toJson();
	Lista<Paquete>& getPaquetes();
	void ejecutarAccion(Llamada* l);

};