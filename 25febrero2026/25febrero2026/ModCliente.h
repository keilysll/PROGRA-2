#pragma once
#include"cliente.h"
class ModCliente
{
private:
	cliente** clientes;
	int cantMax;
	int id;
public:
	ModCliente(int cantMax);

	~ModCliente();
	int getCantMax();
	int getCantActual();
	void registrar(cliente* cliente);
	cliente* buscar(int ci);
	void mostrar();

};

