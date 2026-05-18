#include "ContSingleton.h"

ContSingleton::ContSingleton()
{
	cont = 0;
}

ContSingleton::~ContSingleton()
{
}

ContSingleton& ContSingleton::getInst()
{ 
	static ContSingleton inst;
	return inst;
}

void ContSingleton::incrementar()
{
	m.lock();
	cont++;
	m.unlock();
}
void ContSingleton::decrementar()
{
	m.lock();
	cont--;
	m.unlock();
}
int ContSingleton::getCont()
{
	return cont;
}


