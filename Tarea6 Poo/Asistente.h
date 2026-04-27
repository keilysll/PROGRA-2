#pragma once
#include "Voluntario.h"
#include"Lista.h"
#include"Animal.h"
#include"Animales.h"
class Asistente :
    public Voluntario
{
private:
    Lista<Animal> animales;
public:
    Asistente(int ci, string nombre);
    ~Asistente();
    int getCi();
    string toString();
    void asignarAnimal(int codigo);

};

