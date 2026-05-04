#pragma once
#include"Mascota.h"
#include"Lista.h"
class Cliente
{
private:
	int ci;
	string nombre;
	int fono;
	Lista<Mascota>mascotas;
public:
	Cliente(int ci);
	Cliente(int ci,string nombre,int fono);
	~Cliente();
	int getCi();
	bool operator==(Cliente* c);
	static bool CmpCi(Cliente* c1, Cliente* c2);
	Lista<Mascota>& getMascotas();
	static string toString(Cliente* c);
	string toString();


};

