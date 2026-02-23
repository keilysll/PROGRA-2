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
void ejemplo3()
{
	Persona per1;
	per1.setCi(123);
	per1.setNombre("Juan");
	per1.setFono(7000);
	per1.mostrar();

}

void ejemplo4()
{
	Persona per1(1234, "juan ", 700000);
	cout << "Ci: " << per1.getCi() << endl;
	cout << "Nombre: " << per1.getNombre() << endl;
	cout << "Fono: " << per1.getFono() << endl;

}

void ejemplo5()
{
	Persona* per1 = new Persona (1234, "juan ", 700000); //Constructor sobre cargado
	per1-> mostrar(); //(*per1) . mostrar(); flecha para punteros 
	delete per1;

}

void ejemplo6()
{
	Persona per1(1234, "juan ", 700000); //Constructor sobre cargado
	Persona* per2 = &per1;
	per2->mostrar();
}

// NO HAY MEMORIA DINAMICA
void ejemploArray1 ()
{
	Persona personas[5];
	for (int i = 0; i < 5; i++)
		personas[i].mostrar();
	
}

//HAY MEMORIA DINAMICA
void ejemploArray2()
{
	Persona* personas[5];
	for (int i = 0; i < 5; i++)
		personas[i] = new Persona(1234, "juan ", 700000);

	for (int i = 0; i < 5; i++)
		personas[i]->mostrar();

	for (int i = 0; i < 5; i++)
		delete personas[i];


}
// HAY MEMORIA DINAMICA EN EL VECTOR 
void ejemploArray3()
{
	Persona* personas = new Persona[5];
	for (int i = 0; i < 5; i++)
		personas[i].mostrar();
	delete[]personas;


}

// HAY MEMORIA DINAMICA 
void ejemploArray4()
{
	Persona** personas = new Persona * [5];
	for (int i = 0; i < 5; i++)
		personas[i] = new Persona(1234, "juan ", 700000);

	for (int i = 0; i < 5; i++)
		personas[i]->mostrar();

	for (int i = 0; i < 5; i++)
		delete personas[i];
	delete[] personas;

}

int main()
{
	ejemploArray4();
}