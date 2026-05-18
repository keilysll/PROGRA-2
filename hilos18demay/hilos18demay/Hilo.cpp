#include "Hilo.h"

Hilo::Hilo(int id)
{
	this->id = id;
	t = NULL;
}

Hilo::~Hilo()
{
}	

void Hilo::iniciar()
{
	t = new thread(ejecutarProcesar, this);

}

void Hilo::join()
{
	if(t!=NULL)
		t->join();
}

void Hilo::ejecutarProcesar(Hilo* h)
{
	h->procesar();
}
