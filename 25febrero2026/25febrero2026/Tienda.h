
#include"ModCliente.h"
#define CANT_MAX_CLI 10
class Tienda
{
private:
	string nombre;
	ModCliente clientes;
public:
	Tienda(string nombre);
	~Tienda();
	string getNombre();
	ModCliente& getClientes();
	void mostrar();

};

