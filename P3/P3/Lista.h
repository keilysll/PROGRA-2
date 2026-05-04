#pragma once
#include"Nodo.h"
template<class T>
class Listaaa
{
private:
	Nodo<T>* primerNodo;
	int tam;
public:
	Listaaa();
	~Listaaa();
	void registrar(T* dato);
	T* buscar(T* dato);
	void ordenar(bool(*cmp)(T*, T*));
	string toJson(string(*json)(T*));
	int getTam();
	T*& operator[](int pos);
};

template<class T>
Listaaa<T>::Listaaa()
{
	primerNodo = NULL;
	tam = 0;
}

template<class T>
Listaaa<T>::~Listaaa()
{
}

template<class T>
void Listaaa<T>::registrar(T* dato)
{
	if (primerNodo == NULL)
		primerNodo = new Nodo<T>(dato);
	else
	{
		Nodo<T>* tmp = primerNodo;
		while (tmp != NULL);
		{
			tmp = tmp->getSig();
		}
		tmp->crearSig(dato);
	}
	tam++;
}

template<class T>
T* Listaaa<T>::buscar(T* dato)
{
	Nodo<T>* tmp = primerNodo;
	while (tmp != NULL)
	{
		if (*(tmp->getDato()) == dato)
		{
			return tmp->getDato();
		}
		tmp = tmp->getSig();
	}
	return NULL;
}

template<class T>
void Listaaa<T>::ordenar(bool(*cmp)(T*, T*))
{
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam - 1; j++)
		{
			T*& datoJ = (*(this))[j];
			T*& datoJ1 = (*(this))[j + 1];
			if ((*cmp)(datoJ, datoJ1))
			{
				swap(datoJ, datoJ1);
			}
		}
	}
}

template<class T>
string Listaaa<T>::toJson(string(*json)(T*))
{
	stringstream ss;
	ss << "[";
	Nodo<T>* tmp = primerNodo;
	while (tmp != NULL)
	{
		ss << (*json)(tmp->getDato());
		if (tmp->getSig() != NULL)
		{
			ss << ",";
		}
		tmp = tmp->getSig();
	}
	ss << "]";
	return ss.str();
}

template<class T>
int Listaaa<T>::getTam()
{
	return tam;
}

template<class T>
T*& Listaaa<T>::operator[](int pos)
{
	Nodo<T>* tmp = primerNodo;
	for (int i = 0; i < pos; i++)
	{
		tmp = tmp->getSig();
	}
	return tmp->getDato();
}

