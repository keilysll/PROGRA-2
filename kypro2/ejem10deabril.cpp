// Incluir clases necesrias

#include<iostream>
#include"Cliente.h"
#include"Mesa.h"
#include"Atencion.h"
#include"ModGenerico.h"

using namespace std;
ModGenerico<Cliente> clientes(10);

int pregunta1()
{
	cout << "----Pregunta 1----" << endl;
	cout << "Resultado esperado:" << endl;
	cout << "{\"numero\":1,\"mesa\":{\"codigo\":\"pb1\",\"capacidad\":5},\"clientes\":[{\"nombre\":\"Juan\",\"items\":[]},{\"nombre\":\"Jose\",\"items\":[]},{\"nombre\":\"Maria\",\"items\":[]}]}" << endl;

	//crear mesa(codigo mesa, capacidad)
	Mesa* mesa = new Mesa("pb1", 5);
	//crear atencion(numero de atencion, mesa)
	Atencion atencion(1, mesa);
	//registramos cliente en atencion(nombre cliente)
	atencion << new Cliente("Juan");
	atencion << new Cliente("Jose");
	atencion << new Cliente("Maria");
	cout << "Resultado obtenido:" << endl;
	cout << atencion.toJson() << endl;
	if (atencion.toJson() == "{\"numero\":1,\"mesa\":{\"codigo\":\"pb1\",\"capacidad\":5},\"clientes\":[{\"nombre\":\"Juan\",\"items\":[]},{\"nombre\":\"Jose\",\"items\":[]},{\"nombre\":\"Maria\",\"items\":[]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 30;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}
/*
int pregunta2()
{
	cout << "----Pregunta 2----" << endl;
	cout << "Resultado esperado:" << endl;
	cout << "{\"numero\":1,\"mesa\":{\"codigo\":\"pb1\",\"capacidad\":5},\"clientes\":[{\"nombre\":\"Juan\",\"items\":[{\"nombre\":\"papas\",\"precio\":10},{\"nombre\":\"coke\",\"precio\":8}]},{\"nombre\":\"Maria\",\"items\":[{\"nombre\":\"hamburguesa\",\"precio\":20},{\"nombre\":\"sprite\",\"precio\":8}]}]}" << endl;
	//crear mesa(codigo mesa, capacidad)
	Mesa* mesa = new Mesa("pb1", 5);
	//crear atencion(numero de atencion, mesa)
	Atencion atencion(1, mesa);
	//registramos cliente en atencion(nombre cliente)
	atencion << new Cliente("Juan");
	atencion << new Cliente("Maria");
	//registramos items(nombre, precio) en cliente 0
	atencion[0] << new Item("papas", 10);
	atencion[0] << new Item("coke", 8);
	//registramos items(nombre, precio) en cliente 1
	atencion[1] << new Item("hamburguesa", 20);
	atencion[1] << new Item("sprite", 8);
	cout << "Resultado obtenido:" << endl;
	cout << atencion.toJson() << endl;
	if (atencion.toJson() == "{\"numero\":1,\"mesa\":{\"codigo\":\"pb1\",\"capacidad\":5},\"clientes\":[{\"nombre\":\"Juan\",\"items\":[{\"nombre\":\"papas\",\"precio\":10},{\"nombre\":\"coke\",\"precio\":8}]},{\"nombre\":\"Maria\",\"items\":[{\"nombre\":\"hamburguesa\",\"precio\":20},{\"nombre\":\"sprite\",\"precio\":8}]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 30;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}
int pregunta3()
{
	cout << "----Pregunta 3----" << endl;
	cout << "Resultado esperado: 46" << endl;
	//crear mesa(codigo mesa, capacidad)
	Mesa* mesa = new Mesa("pb1", 5);
	//crear atencion(numero de atencion, mesa)
	Atencion atencion(1, mesa);
	//registramos cliente en atencion(nombre cliente)
	atencion << new Cliente("Juan");
	atencion << new Cliente("Maria");
	//registramos items(nombre, precio) en cliente 0
	atencion[0] << new Item("papas", 10);
	atencion[0] << new Item("coke", 8);
	//registramos items(nombre, precio) en cliente 1
	atencion[1] << new Item("hamburguesa", 20);
	atencion[1] << new Item("sprite", 8);
	cout << "Resultado obtenido:" << atencion.getCuenta() << endl;
	if (atencion.getCuenta() == 46)
	{
		cout << "Resultado: correcto" << endl;
		return 40;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}
*/
int main()
{
	int nota = pregunta1();// +pregunta2() + pregunta3();
	cout << endl;
	cout << "====================" << endl;
	cout << "===> NOTA: " << nota << "/100" << endl;
	cout << "====================" << endl;
	system("pause");
	return 0;
}

