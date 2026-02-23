
//INCLUIR LIBRERIAS
#include <iostream>
#include <string>
using namespace std;
//DECLARAR CLASE
class Persona
{
	//ATRIBUTOS
private:
	int ci;
	string nombre;
	int fono;
	//METODOS
public:
	//Constructor
	Persona(); //Si no lleva parametros es constructor por defecto
	Persona(int ci, string nombre, int fono);//Copia o cobrecargado
	//Destructor
	~Persona(); // Es invocado automaticamente(Liberar recursos)

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

