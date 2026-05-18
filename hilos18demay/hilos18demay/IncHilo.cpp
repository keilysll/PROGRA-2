#include "IncHilo.h"

IncHilo::IncHilo(int id, int num):Hilo(id)
{
    this->num = num;
}

IncHilo::~IncHilo()
{
}

void IncHilo::procesar()
{
    for (int i = 0;i < 1000000;i++)
    {
        cout << "Hilo:" << id << "incrementa:" << i << endl;
        ContSingleton::getInst().incrementar();
       this_thread::sleep_for(chrono::milliseconds(100));
    }
}
