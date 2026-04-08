#pragma once

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Funcion
{
private:
	int id;
	string nomPeli;
public:
	Funcion(int id,string nomPeli);
	~Funcion();
	int getId();

};

