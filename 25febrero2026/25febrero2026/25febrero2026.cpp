// 25febrero2026.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Tienda.h"
int main()
{
	Tienda tienda("ABC");
	tienda.getClientes().registrar(new cliente(123, "juan", 700));
	tienda.mostrar();

}

