
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
long cont = 0;
mutex m; 

/*
void hola(int id)
{
    for (int i = 0; i < 1000; i++)
    {
        //cout<<"Hilo" <<id<< "dice Hola" <<i<< endl;
    }
   
}
*/
void incrementar(int id)
{
    for (int i = 0; i < 100000; i++)
    {
        m.lock();
        cont++;
        m.unlock();
    }

}
int main()
{
    thread* hilos[10];
    for (int i = 0; i < 10; i++)
        hilos[i] = new thread(incrementar,i);
    for (int i = 0; i < 10; i++)
        hilos[i]->join();
    cout<<"Contador" <<cont<< endl;
}

