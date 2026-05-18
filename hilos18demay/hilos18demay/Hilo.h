#pragma once
#include <iostream>
#include<thread>
using namespace std;

class Hilo
{
protected:
	int id;
private:
	thread* t;

public:
	Hilo(int id);
	~Hilo();
	void iniciar();
	void join();
private:
	static void ejecutarProcesar(Hilo* h);
protected:
	virtual void procesar() = 0;
};

