#include <iostream>
using namespace std;

void llenarVector(int vect[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Digite nro " << i + 1 << " = ";
        cin >> vect[i];
    }
}

void mostrarVector(int vect[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}

void ordenarAscendente(int v[],int n)
{   int i,j,aux;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
           }
        }
    }
}


int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);
    cout << "vector ordenado de forma ascendente: "<<endl;
    ordenarAscendente(vect, n);
    mostrarVector(vect, n);

    return 0;
}
