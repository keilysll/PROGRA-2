//Registro de 3 personas en una veterinaria, con 2 mascotas por persona
#include <iostream>
#include "ModMascota.h"
#include "ModCliente.h"
#include "Cliente.h"
#include "Mascota.h"
using namespace std;
ModCliente personas(4);
//ModMascota mascotas;
void ejemplo1() {
	Cliente* p1 = new Cliente("Juan");
	Cliente* p2 = new Cliente("Maria");
	Cliente* p3 = new Cliente("Pedro");

	personas.registrarCliente(p1);
	personas.registrarCliente(p2);
	personas.registrarCliente(p3);

	Mascota* m1 = new Mascota("Firulais", "Labrador");
	Mascota* m2 = new Mascota("Michi", "Siames");
	Mascota* m3 = new Mascota("Rex", "Pastor Aleman");

	//mascotas.registrarMascota(m1);
	p1->getMascotas().registrarMascota(m1);
	p1->getMascotas().registrarMascota(m2);
	p3->getMascotas().registrarMascota(m3);


	personas.mostrarCliente();
}


int main()
{
	ejemplo1();
	return 0;
}