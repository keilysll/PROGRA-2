#pragma once
#include "Atencion.h"
#include "ModServicio.h"
#include"ModCliente.h"
#include"ModMascota.h"
class AtencionDoble :
    public Atencion
{
private:
    Servicio* servicio1;
    Servicio* servicio2;
    Cliente* cliente;
    Mascota* mascota;

public:
    AtencionDoble(int ind, Servicio* s1, Servicio* s2, Cliente* c, Mascota* m);
    ~AtencionDoble();
    int getInd();
    string toJson();

};
