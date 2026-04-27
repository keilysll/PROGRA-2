#pragma once
#include"Animal.h"
#include"Lista.h"
#include"Ave.h"
#include"Felino.h"
class Animales
{
private:
	Lista<Animal> animales;
public:
	~Animales();
	static Animales& getInst();
	void registrar(int c, string e, int ed, bool vuel);
	void registrar(int c, string e, int ed, int peso);
	Animal* buscar(int cod);
	string toString();


private:
	Animales();


};

