
#pragma once
#include"Cliente.h"
#include <sstream>
class ModCliente
{
private:
	Cliente** personas;
	int tam;
	int ind;
public:
	ModCliente(int tam);
	~ModCliente();
	void registrar(Cliente* p);
	Cliente* buscarCliente(string nombre);
	void ordenarCli();
	string toJson();

};





