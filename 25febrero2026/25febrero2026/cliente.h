#include <iostream>
#include <string>
using namespace std;
//DECLARAR CLASE
class cliente
{
	//ATRIBUTOS
private:
	int ci;
	string nombre;
	int fono;
	//METODOS
public:
	//Constructor
	cliente(); //Si no lleva parametros es constructor por defecto
	cliente(int ci, string nombre, int fono);//Copia o cobrecargado
	//Destructor
	~cliente(); // Es invocado automaticamente(Liberar recursos)

	//Metodos - Gets
	int getCi();
	string getNombre();
	int getFono();
	//Metodos - Sets
	void setCi(int ci);
	void setNombre(string nombre);
	void setFono(int fono);
	//Metodos que ayudan a resolver el problema 
	void mostrar();

};

