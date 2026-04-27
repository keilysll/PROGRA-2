#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
template <class T>
class ModGenerico
{
private:

	T** datos;
	int ind;
	int tam;

public:
	ModGenerico(int tam);
	~ModGenerico();
	void registrar(T* dato);
	T* buscar(T* dato);
	string toJson();
	T* obtener(int dato);
	int getInd();
  

};

template<class T>
 ModGenerico<T>::ModGenerico(int tam)
{
	 this->tam = tam;
	 this->ind = 0;
	 datos = new T * [tam];
}

 template<class T>
 ModGenerico<T>::~ModGenerico()
 {
	
 }

 template<class T>
 void ModGenerico<T>::registrar(T* dato)
 {
	 if (ind < tam)
	 {
		 datos[ind] = dato;
		 ind++;
	 }

 }

 template<class T>
 T* ModGenerico<T>::buscar(T* dato)
 {
	 for (int i = 0; i < ind; i++)
	 {
		 if (*datos[i] == dato)
			 return datos[i];
	 }
	 return nullptr;
 }

 template<class T>
 string ModGenerico<T>::toJson()
 {
	 stringstream ss;
	 ss<<"[";
	 for (int i = 0; i < ind; i++)
	 {
		 ss << datos[i]->toJson();
		 if (i < ind - 1)
		 {
			 ss<<",";
		 }
			
	 }
	 ss << "]";

	 return ss.str();
 }

 template<class T>
 T* ModGenerico<T>::obtener(int dato)
 {
	 for (int i = 0; i < ind; i++)
	 {
		 if (i == dato)
		 {
			 return datos[i]; 
		 }
	 }
	 return nullptr;
 }

 template<class T>
 int ModGenerico<T>::getInd()
 {
	 return ind;
 }
