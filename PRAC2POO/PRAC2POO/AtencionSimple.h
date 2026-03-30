#pragma once
#include "Atencion.h"
#include "ModServicio.h"
#include"ModCliente.h"
#include"ModMascota.h"

class AtencionSimple :
    public Atencion
{
private:
    Servicio* servicio;
    Cliente* cliente;
    Mascota* mascota;

public:
    AtencionSimple(int ind, Servicio* s,Cliente*c,Mascota* m);
    ~AtencionSimple();
    int getInd();
    string toJson();

};

