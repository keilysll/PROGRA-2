#include <iostream>
#include "Tiendaa.h"

using namespace std;

int main()
{
	Tiendaa t("ABA");

	t.getCliente().registrar(new Cliente("Ana", 1313, 3245));
	t.getCliente().registrar(new Cliente("Pablo", 1243, 3234));
	t.getCliente().registrar(new Cliente("Ariana", 1223, 3233));

	t.getProd().registrar(new Producto(1, 14, "leche"));
	t.getProd().registrar(new Producto(2, 18, "pan"));

	Cliente* c = t.getCliente().buscar(1313);

	t.getvet().registrar(new Venta(1, 1233, c));

	Producto* p = t.getProd().buscar(1);
	Venta* v = t.getvet().buscar(1);

	v->getProductos().registrar(p);

	cout << t.toJson();

	

}

