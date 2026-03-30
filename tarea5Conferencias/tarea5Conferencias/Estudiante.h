#pragma once
#include "Participante.h"
class Estudiante :
    public Participante
{
private:
    string carrera;
public:
    Estudiante(string nombre,string carrera);
    ~Estudiante();
    string getCarrera();
    string toJson();

};

