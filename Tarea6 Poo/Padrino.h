#pragma once
#include "Voluntario.h"
#include"Pago.h"
#include"Lista.h"
class Padrino :
    public Voluntario
{
private:
    Lista<Pago> pagos;
public:
    Padrino(int ci, string nombre);
    ~Padrino();
    int getCi();
    void realizarPago(Pago* p);
    string toString();

};

