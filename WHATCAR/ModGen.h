#pragma once
#include <iostream>
#include <sstream>
using namespace std;

#define TAM 10
template <class  T>

class ModGen
{
private:
	int ind;
	//clase **
	T** datos;
public:
	ModGen();
	~ModGen();
	void registrar(T* dato);
	T* buscar(T* dato);
	void ordenar(bool (*cmp)(T*, T*));
	string toJson(string(*Json)(T*));
};

template<class T>
inline ModGen<T>::ModGen()
{
	ind = 0;
	datos = new T * [TAM];
}

template<class T>
inline ModGen<T>::~ModGen()
{
	delete[] datos;
}

template<class T>
inline void ModGen<T>::registrar(T* dato)
{
	if (ind < TAM)
	{
		datos[ind] = dato;
		ind++;
	}
}

template<class T>
inline T* ModGen<T>::buscar(T* dato)
{
	for (int i = 0; i < ind; i++)
	{
		if (*(datos[i]) == dato)
		{
			return datos[i];
		}
	}
	return nullptr;
}

template<class T>
inline void ModGen<T>::ordenar(bool(*cmp)(T*, T*))
{
	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind-1; j++)
		{
			if ((*cmp)(datos[j], datos[j + 1]))
			{
				swap(datos[j], datos[j + 1]);
			}
		}
	}
}

template<class T>
inline string ModGen<T>::toJson(string(*Json)(T*))
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < ind; i++)
	{
		ss << (*Json)(datos[i]);
		if (i < ind - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}
