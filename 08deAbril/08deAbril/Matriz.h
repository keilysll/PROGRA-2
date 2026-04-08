#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template<class T>

class Matriz
{
private:
	T** m;
	int filas;
	int columnas;
public:
	Matriz(int f, int c);
	~Matriz();
	T* operator[](int f);
private:
	void reservar();
	void liberar();
	

};

template<class T>
Matriz<T>::Matriz(int f, int c)
{
	this->filas = f;
	this->columnas = c;
	reservar();

}

template<class T>
Matriz<T>::~Matriz()
{
	liberar();
}

template<class T>
T* Matriz<T>::operator[](int f)
{
	return m[f];
}

template<class T>
void Matriz<T>::reservar()
{
	m = new T * [filas];
	for (int i = 0; i < filas; i++)
	{
		*(m + i) = new T[columnas];
	}
}

template<class T>
void Matriz<T>::liberar()
{
	for (int i = 0; i < filas; i++)
	{
		delete[] *(m + i);
	}
	delete[] m;
}
