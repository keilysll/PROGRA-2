
#pragma once
#include"Cliente.h"
class ModCliente
{ 
	private:
		Cliente ** personas;
		int tam;
		int ind;
public:
	ModCliente(int tam);
	~ModCliente();
	void registrarCliente(Cliente* p);
	Cliente* buscarCliente(string nombre);
	void mostrarCliente();

};

