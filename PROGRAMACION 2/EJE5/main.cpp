#include <iostream>

using namespace std;

void llenarVector (int vect[], int n)
{
    for (int i = 0 ; i < n ; i ++)
    {
    cout<<"Digite nro  "<< i + 1<<" =" ;
    cin >> vect[i];
    }
}

void MostrarVector(int vect [] , int n)
{
    for (int i = 0 ; i < n ; i ++)
    {
        cout <<vect [i]<<" ";
    }
    cout<<endl;
}


int Sumarmatriz (int vect [],int n)
{
    int suma = 0;
    for(int i = 0; i < n ; i++)
{
    suma = suma + vect[i];
        }

    return suma;
}

int main()
{
    int vect[100];
    int n;

    cout <<"Ingrese tamanio de del vector"<<endl ;
    cin>>n;
    llenarVector(vect, n);
    MostrarVector(vect, n);

    int suma = Sumarmatriz(vect,n);
    float promedio = suma /n;

    cout <<"El promedio del vector es :"<<promedio<<endl;
    return 0;
}
