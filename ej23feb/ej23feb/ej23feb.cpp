#include "Persona.h"
void ejemplo1()
{
	Persona per1;
	per1.mostrar(); // Constructor po defecto 

}

void ejemplo2()
{
	Persona per1(1234, "juan ", 700000); //Constructor sobre cargado
	per1.mostrar();

}

int main()
{
	ejemplo1();
	ejemplo2();
}