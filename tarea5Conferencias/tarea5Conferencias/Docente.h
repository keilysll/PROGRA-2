#pragma once
#include "Participante.h"
class Docente : public Participante
{
private:
    string especialidad;
public:
    Docente(string nombre, string especialidad);
    ~Docente();
    string getEsp();
    string toJson();
};
