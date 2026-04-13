#pragma once

#include <iostream>
#include<sstream>
#include<string>
using namespace std;

template<class T>
class Nodo
{
private:
	T* dato;
	Nodo<T>* sig;
public:
	Nodo(T* dato);
	~Nodo();
	T* getdato();
	Nodo<T>* getSig();
	void SetDato(T* dato);
	void SetSig(Nodo<T>* sig);
	void crearSig(T* dato);

};

template<class T>
 Nodo<T>::Nodo(T* dato)
{
	 this->dato = dato;
	 sig = NULL;
}

 template<class T>
 Nodo<T>::~Nodo()
 {

 }

 template<class T>
 T* Nodo<T>::getdato()
 {
	 return dato;
 }

 template<class T>
 Nodo<T>* Nodo<T>::getSig()
 {
	 return sig;
 }

 template<class T>
 void Nodo<T>::SetDato(T* dato)
 {
	 this->dato = dato;
 }

 template<class T>
 void Nodo<T>::SetSig(Nodo<T>* sig)
 {
	 this->sig = sig;
 }

 template<class T>
 void Nodo<T>::crearSig(T* dato)
 {
	 sig = new Nodo<T>(dato);
 }
