#include "ModCliente.h"
#include"ModAvion.h"
#include "ModVuelo.h"
#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    ModCliente clientes(10);
    ModAvion aviones(5);
    ModVuelo vuelos(5);

    Cliente* c1 = new Cliente("Juan", 123, 777);
    Cliente* c2 = new Cliente("Maria", 456, 888);

    clientes.registrar(c1);
    clientes.registrar(c2);

    Avion* a1 = new Avion(1, 120, "Boeing");
    aviones.registrar(a1);

    Vuelo* v1 = new Vuelo(101, "CBBA", "LPZ", a1);
    vuelos.registrar(v1);

    v1->agregarPasajero(c1);
    v1->agregarPasajero(c2);

    cout << vuelos.toJson();
}

