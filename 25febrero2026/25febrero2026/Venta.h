#pragma once
#include"Cliente.h"
#include"ModProducto.h"
#define CANT_MAX_PR_EN_VENTA 10
class Venta
{
private:
	int numero;
	cliente* clientes;
	ModProducto productos;

public:
	Venta(int numero, cliente* clientes);

	~Venta();
	int getNumero();
	ModProducto& getProductos();
	void mostrar(); 




};

