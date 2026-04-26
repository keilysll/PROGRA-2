#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Atencion
{
protected:
	int codigo;
	string descripcion;
	int costo;
public:
	Atencion(int codigo, string descripcion, int costo);
	Atencion(int codigo);
	~Atencion();
	int getCodigo();
	string getDescripcion();
	int getCost();
	virtual string toJson();
	bool operator==(Atencion* atencion);
	static string toStatic(Atencion* atencion);
	static bool comparacionCodigo(Atencion* atencion1, Atencion* atencion2);
};

