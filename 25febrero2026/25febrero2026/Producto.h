#include <iostream>
#include <string>
using namespace std;
#include
class Producto
{
private:
	int codigo;
	string nombre;
	int precio;
public:
	Producto(int codigo, string nombre, int precio);

	~Producto();
	int getCodigo();
	string getNombre();
	int getPrecio();
	void mostrar();

};

