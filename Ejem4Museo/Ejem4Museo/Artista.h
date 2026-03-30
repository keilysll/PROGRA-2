#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include"ModObras.h"
using namespace std;
class Artista
{
protected:
	string nombre;
	ModObras obras;
public:
	Artista(string nombre);
	~Artista();
	string getNombre();
	void registrar(Obra* o);
	virtual string toJson() = 0;


};

