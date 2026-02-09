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

void burbuja(int v[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
    burbuja(v, n - 1);
}


int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    cout<<"Ordenado de forma ascendente: "<<endl;
    burbuja(vect,n);
    mostrarVector(vect, n);

    return 0;
}
