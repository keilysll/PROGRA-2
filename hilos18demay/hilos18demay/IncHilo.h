#pragma once
#include "Hilo.h"
#include"ContSingleton.h"
class IncHilo : public Hilo
{
private:
	int num;
public:
	IncHilo(int id, int num);
	~IncHilo();
	void procesar();

};

