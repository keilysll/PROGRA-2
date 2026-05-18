#pragma once
#include"IncHilo.h"
#include"DecHilo.h"
class Programa
{
private:
    IncHilo** incr;
    int numInc;
    int totalInc;
    DecHilo** dec;
    int numDec;
    int totalDec;
public:
    Programa(int numInc, int numDec, int totalInc, int totalDec);
    ~Programa();
    void crearInc();
    void crearDec();
    void iniciarInc();
    void iniciarDec();
    void iniciar();
    void esperar();
    void mostrar();

};

