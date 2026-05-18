#include "DecHilo.h"

DecHilo::DecHilo(int id, int num) :Hilo(id)
{
    this->num = num;
}

DecHilo::~DecHilo()
{
}

void DecHilo::procesar()
{
    for (int i = 0;i < 1000000;i++)
    {
        cout << "Hilo:" << id << "decrementa:" << i << endl;
        ContSingleton::getInst().decrementar();
    }
}
