#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"Item.h"
#include"ModGenerico.h"

using namespace std;
class Cliente
{
private:
	string nombre;
	ModGenerico<Item> items;

public:
	Cliente(string nombre);
	~Cliente();
	string getNombre();
	string toJson();
	bool operator<<(Item* item);
	int getCuenta();

};

