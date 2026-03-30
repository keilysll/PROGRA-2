#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Atencion
{
protected:
	int ind;
public:
	Atencion(int ind);
	~Atencion();
	int getInd();
	virtual string toJson() = 0;

};

