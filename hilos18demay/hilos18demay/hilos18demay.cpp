#include"IncHilo.h"
#include"DecHilo.h"
#include"Programa.h"
/*
#include <iostream>
#include<thread>//para crear hilos
#include<mutex>//sincronizar el acceso a situacones crtitcas
using namespace std;

long cont = 0;
mutex m;
void incrementar(int num)
{
    for (int i = 0;i < 1000000;i++)
    {
        m.lock();
        cont++;
        cout << "Hilo:" << num << "incrementa a:" << cont << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        m.unlock();
    }
}
*/
int main()
{
    Programa p(100, 10,1000,200);
    p.iniciar();
    p.esperar();
    p.mostrar();
    /*
    IncHilo* incr[10];
    for (int i = 0; i < 10; i++)
        incr[i] = new IncHilo(i);

    DecHilo* dec[10];
    for (int i = 0; i < 10; i++)
        dec[i] = new DecHilo(i);


    for (int i = 0; i < 10; i++)
        incr[i]->iniciar();
    
    for (int i = 0; i < 10; i++)
        dec[i]->iniciar();

    for (int i = 0; i < 10; i++)
        incr[i]->join();
    for (int i = 0; i < 10; i++)
        dec[i]->join();


    
    cout << "cont:" << ContSingleton::getInst().getCont()<< endl;
    */
    /*
    thread* hilos[10];
    for (int i = 0; i < 10;i++)
    {
        hilos[i] = new thread(incrementar,i);
    }
    for (int i = 0; i < 10;i++)
    {
        hilos[i]->join();
    }
    cout << "cont:" << cont << endl;
  */
}


