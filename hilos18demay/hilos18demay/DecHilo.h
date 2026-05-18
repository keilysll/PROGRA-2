#pragma once
#include "Hilo.h"
#include"ContSingleton.h"
class DecHilo :
    public Hilo
{
	private:
		int num;

public:
	DecHilo(int id, int num);
	~DecHilo();
	void procesar();

};

