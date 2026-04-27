#include "Animales.h"

Animales::~Animales()
{
}
Animales& Animales::getInst()
{
	static Animales inst;
	return inst;
}
void Animales::registrar(int c, string e, int ed, bool vuel)
{
	animales.registrar(new Ave(c, e, ed, vuel));
}

void Animales::registrar(int c, string e, int ed, int peso)
{
	animales.registrar(new Felino(c, e, ed, peso));
}

Animal* Animales::buscar(int cod)
{
    Animal cAbuscar(cod);
    Animal* cEncontrado = animales.buscar(&cAbuscar);
    return cEncontrado;
}


string Animales::toString()
{
    animales.ordenar(Animal::cmpCodigo);

    stringstream ss;
    ss << "{\"animales\":[";

    int i = 0;
    while (animales[i] != NULL)
    {
        ss << animales[i]->toString();
        if (animales[i + 1] != NULL)
            ss << ",";
        i++;
    }

    ss << "]}";
    return ss.str();
}

Animales::Animales()
{

}
