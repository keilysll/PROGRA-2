#include <iostream>
#include "Cliente.h"
#include "Mascota.h"
#include "Atencion.h"
#include "Reserva.h"
#include "ModReserva.h"
#include "ModCliente.h"

using namespace std;

int main()
{
    ModCliente modC(5);
    ModReserva modR(5);

    Cliente* c1 = new Cliente("Pedro", 300);
    Cliente* c2 = new Cliente("Ana", 100);
    Cliente* c3 = new Cliente("Luis", 200);

    modC.registrar(c1);
    modC.registrar(c2);
    modC.registrar(c3);

    modC.ordenarCli();

    Mascota* m1 = new Mascota("Firulais", "Salchicha");
    Mascota* m2 = new Mascota("Max", "Bulldog");

    c1->getMascotas().registrarMascota(m1);
    c2->getMascotas().registrarMascota(m2);

    Atencion* a1 = new Atencion("Vacuna", 20260117, 80, 10);
    Atencion* a2 = new Atencion("Baño", 20260118, 40, 20);

    Reserva* r1 = new Reserva(1, c1, a1, m1);
    Reserva* r2 = new Reserva(2, c2, a2, m2);

    modR.registrar(r1);
    modR.registrar(r2);

    cout << "CLIENTES ORDENADOS\n";
    cout << modC.toJson() << endl;

    cout << "\nRESERVAS\n";
    cout << modR.toJson() << endl;

    return 0;
}