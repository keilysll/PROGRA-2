#include "Programa.h"

Programa::Programa(int numInc, int numDec, int totalInc, int totalDec)
{
	this->numInc = numInc;
	this->numDec = numDec;
	this->totalInc = totalInc;
	this->totalDec = totalDec;
}

Programa::~Programa()
{
}

void Programa::crearInc()
{
	incr = new IncHilo * [numInc];
	for (int i = 0; i < numInc; i++)
		incr[i] = new IncHilo(i,totalInc);
}

void Programa::crearDec()
{
	dec = new DecHilo * [numDec];
	for (int i = 0; i < numDec; i++)
		dec[i] = new DecHilo(i, totalDec);
}

void Programa::iniciarInc()
{
	for (int i = 0; i < numInc; i++)
		incr[i]->iniciar();
}

void Programa::iniciarDec()
{
	for (int i = 0; i < numDec; i++)
		dec[i]->iniciar();
}

void Programa::iniciar()
{
	crearInc();
	crearDec();
	iniciarInc();
	iniciarDec();
}

void Programa::esperar()
{
	for (int i = 0; i < numInc; i++)
		incr[i]->join();
	for (int i = 0; i < numDec; i++)
		dec[i]->join();
}

void Programa::mostrar()
{
	cout<<"cont: "<<ContSingleton::getInst().getCont() << endl;
}
