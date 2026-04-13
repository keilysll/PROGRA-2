#pragma once
#include"Nodo.h"
template<class T>
class ListaEnlazada
{
private:
	Nodo<T>* primerNodo;
public:
	ListaEnlazada();
	~ListaEnlazada();
	void registrar(T* dato);
	T* buscar(T* dato);
	string toJson(string(*json)(T*));
	void ordenar(bool(*cmp)(T*,T*));

};

template<class T>
 ListaEnlazada<T>::ListaEnlazada()
{
	 primerModo = NULL;
}

template<class T>
 ListaEnlazada<T>::~ListaEnlazada()
{

}

 template<class T>
 void ListaEnlazada<T>::registrar(T* dato)
 {
	 if (primerModo == NULL)
		 primerModo = new Nodo<T>(dato);
	 else
	 {
		 Nodo<T>* temp = primerNodo;
		 while (temp->getSig() != NULL)
		 {
			 temp = temp->getSig();
		 }
		 temp->crearSig(dato);
	 }
 }

 template<class T>
 T* ListaEnlazada<T>::buscar(T* dato)
 {
	 Nodo<T>* temp = primerNodo;
	 while (temp != NULL)
	 {
		 if (*(temp->getdato()) == dato)
			 return temp->getdato();
			 temp = temp->getSig();
	 }


	 return NULL;
 }

 template<class T>
 string ListaEnlazada<T>::toJson(string(*json)(T*))
 {
	 stringstream ss;
	 ss << "[";
	 Nodo<T>* temp = primerNodo;
	 while (temp != NULL)
	 {
		 ss << (*json)(temp->getdato());
		 if(temp->getSig() !NULL)
			 ss << ",";
		 temp = temp->getSig();
	 }
	 ss << "]";

	 return ss.str();
 }

 template<class T>
 void ListaEnlazada<T>::ordenar(bool(*cmp)(T*, T*))
 {
	// for(int i = 0; i< )
 }


