#pragma once
#include <iostream>
#include<sstream>
#include<string>
using namespace std;
template <class T>
class ListaArray
{
private:
	T** datos;
	int ind;
	int tamMax;
public:
	ListaArray(int tamMax);
	~ListaArray();
	void registrar(T* dato);
	T* buscar(T* dato);
	void oredenar(bool(*cmp)(T*, T*));
	string toJson(string(*json)(T*));


};

template<class T>
ListaArray<T>::ListaArray(int tamMax)
{
	this->tamMax = tamMax;
	ind = 0;
	datos = new T * [tamMax];
}

template<class T>
ListaArray<T>::~ListaArray()
{
	delete[]datos;
}

template<class T>
void ListaArray<T>::registrar(T* dato)
{
	if (ind < tamMax)
	{
		datos[ind] = dato;
		ind++;
	}
}

template<class T>
T* ListaArray<T>::buscar(T* dato)
{
	for (int i = 0; i < ind; i++)
	{
		if (*(datos[i]) == dato)
		{
			return datos[i];
		}
	}
	return NULL;
}

template<class T>
void ListaArray<T>::oredenar(bool(*cmp)(T*, T*))
{
	for (int i = 0; i < ind - 1; i++)
	{
		for (int j = 0; j < ind - 1 - i; j++)
		{
			if ((*cmp) (datos[j], datos[j + 1]))
			{
				swap(datos[j], datos[j + 1]);
			}
		}
	}
}

template<class T>
 string ListaArray<T>::toJson(string(*json)(T*))
{
	 stringstream ss;
	 ss << "[";
	 for (int i = 0; i < ind; i++)
	 {
		 ss << (*json)(datos[i]);
		 if (i < ind - 1)
			 ss << ",";

	 }
	 ss << "]";
	return ss.str();
}

