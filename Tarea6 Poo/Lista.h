#pragma once
#include"Nodo.h"
template<class T>
class Lista
{
private:
	Nodo<T>* primerNodo;
public:
	Lista();
	~Lista();
	void registrar(T* dato);
	T* buscar(T* dato);
	string toJson(string(*json)(T*));
	void ordenar(bool(*cmp)(T*, T*));
	T* operator[](int index);

};

template<class T>
Lista<T>::Lista()
{
	primerNodo = NULL;
}

template<class T>
Lista<T>::~Lista()
{
}

template<class T>
void Lista<T>::registrar(T* dato)
{
	if (primerNodo == NULL)
		primerNodo = new Nodo<T>(dato);
	else
	{
		Nodo<T>* tmp = primerNodo;
		while (tmp->getSig() != NULL)
		{
			tmp = tmp->getSig();
		}
		tmp->crearSig(dato);
	}
}

template<class T>
T* Lista<T>::buscar(T* dato)
{
	Nodo<T>* tmp = primerNodo;
	while (tmp != NULL)
	{
		if (*(tmp->getDato()) == dato)
		{
			return tmp->getDato();
			tmp = tmp->getSig();
		}
	}
	return NULL;
}

template<class T>
string Lista<T>::toJson(string(*json)(T*))
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
			tmp = tmp->getSig();
		}
	}
	ss << "]";
	return ss.str();
}

template<class T>
inline void Lista<T>::ordenar(bool(*cmp)(T*, T*))
{
	if (primerNodo == NULL) return;

	bool cambio;
	do {
		cambio = false;
		Nodo<T>* actual = primerNodo;

		while (actual->getSig() != NULL)
		{
			Nodo<T>* siguiente = actual->getSig();

			if (!cmp(actual->getDato(), siguiente->getDato()))
			{
				// intercambiar los datos (punteros)
				T* temp = actual->getDato();
				actual->setDato(siguiente->getDato());
				siguiente->setDato(temp);

				cambio = true;
			}

			actual = actual->getSig();
		}

	} while (cambio);
}

template<class T>
 T* Lista<T>::operator[](int index)
{
	 Nodo<T>* tmp = primerNodo;
	 int i = 0;

	 while (tmp != NULL)
	 {
		 if (i == index)
			 return tmp->getDato();

		 tmp = tmp->getSig();
		 i++;
	 }

	 return NULL;
}
