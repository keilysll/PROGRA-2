#pragma once
#include"Socio.h"
#include"Lista.h"
class SingletonSocios
{
private:
	Lista<Socio>socios;
public:
	~SingletonSocios();
	static SingletonSocios& getInst();
	void operator<<(Socio* s);
	Socio* buscar(int ci);
	string toString();
private:
	SingletonSocios();

};

