#pragma once

#include <iostream>
#include<mutex>
using namespace std;
class ContSingleton
{
private:
	int cont;
	mutex m;
public:
	~ContSingleton();
	static ContSingleton& getInst();
	void incrementar();
	void decrementar();
	int getCont();
private:
	ContSingleton();
};

