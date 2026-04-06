#pragma once
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
template<class T>
class ModGen
{
private:
	T** datos;
	int ind;
	int tam;
public:
	ModGen(int tam);
	~ModGen();
	void registrar(T* datos);
	T* buscar(T* dato);
	string toJson(string((*json)(T*));
	void ordenar();


};

template<class T> //Borrar inline
ModGen<T>::ModGen(int tam)
{
	this->tam = tam;
	ind = 0;
	datos = new T * [tam];

}

template<class T>
 ModGen<T>::~ModGen()
{
	 delete[] datos;
}

 template<class T>
 void ModGen<T>::registrar(T* datos)
 {
	 if (ind < tam)
	 {
		 datos[ind] = datos;
		 ind++;
	 }
 }

 template<class T>
 T* ModGen<T>::buscar(T* dato)
 {
	 for (int i = 0;i < ind;i++)
	 {
		 if (*(datos[i]) == dato ) //indireccion para llegar al objeto
		 {
			 return datos[i];
		 }
	 }
	 return NULL;
 }

 template<class T>
 void ModGen<T>::ordenar(bool(*cmp)(T*,T*))
 {
	 for (int i = 0; i < ind - 1; i++)
	 {
		 for (int j = 0; j < ind - 1 - i;j++)
		 {
			 if (((*cmp)(T*, T*))
			 {
				 T* temp = datos[i];
				 datos[i] = datos[j];
					 datos[i] = temp;
			 }
		 }
	 }
 }

 template<class T>
 string ModGen<T>::toJson((string(*json)(T*))
 {
	 
		 stringstream ss;
		 ss << "[";
		 for (int i = 0; i < ind;i++)
		 {
			 ss << (*json)(datos[i]);//Se debe decir al json como se quiere generar
			 if (i < ind - 1) {
				 ss << ",";
			 }
		 }
		 ss << "]";
		 return ss.str();
	 
 }





