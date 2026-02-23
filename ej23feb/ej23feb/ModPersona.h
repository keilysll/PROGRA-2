#include"Persona.h"
class ModPersona
{
private:
	Persona** personas;
	int cantMax;
	int id;
public: 
	ModPersona(int cantMax);
	~ModPersona();
	int getCantMax();
	int getCantActual();
	void registrar(Persona* p);
	Persona* buscar(int ci);
	void mostrar();



		
};

