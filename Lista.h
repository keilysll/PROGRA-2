#pragma once
#include"Nodo.h"
template <class T>
class Lista
{
private:
	Nodo <T>* primerNodo;
public:
	Lista();
	~Lista();
	void registrar(T* dato);
	T* buscar(T* dato);
	string toJson(string(*json)(T*));
	void ordenar(bool (*cmp)(T*, T*));

	
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
	{
		primerNodo = new Nodo<T>(dato);
	}
	else
	{
		Nodo<T>* aux = primerNodo;
		while (aux->getSig() != NULL)
		{
			aux = aux->getSig();
		}
		aux->crearSig(dato);

	}
}

template<class T>
T* Lista<T>::buscar(T* dato)
{
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		if (*(aux->getDato()) == dato)
		{
			return aux->getDato();
		}
		aux = aux->getSig();
	}
	return NULL;
}

template<class T>
string Lista<T>::toJson(string(*json)(T*))
{
	stringstream ss;
	ss << "[";
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		ss << (*json)(aux->getDato());

		if (aux->getSig() != NULL)
		{
			ss << ",";
		}
		aux = aux->getSig();
	}
	ss << "]";
	return ss.str();
}

template<class T>
void Lista<T>::ordenar(bool(*cmp)(T*, T*))
{
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		for (Nodo<T>* i = primerNodo; i != NULL ; i = i->getSig())
		{
			for (Nodo<T>* j = i->getSig(); j !=NULL ; j = j->getSig())
			{
				if ((*cmp) (i->getDato(), j->getDato()))
				{
					swap(i->getDato(), j->getDato());
				}
			}
		}
	}


}
