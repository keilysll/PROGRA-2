#pragma once
#include"ModCliente.h"
#include"Avion.h"
#include<sstream>
using namespace std;

class Vuelo
{
private:
	int codigo;
	string origen;
	string destino;
	ModCliente pasajeros;
	Avion* a;
public:
	Vuelo(int cod, string o, string d, Avion* a);
	~Vuelo();
	int getCod();
	string getorig();
	string getDes();
	Avion* getAv();
	void agregarPasajero(Cliente* c);
	string toJson();
};

