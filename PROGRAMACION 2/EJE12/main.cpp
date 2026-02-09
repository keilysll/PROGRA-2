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

int sumaVector(int v[], int n)
{
    if (n == 0)
        return 0;
    return v[n - 1] + sumaVector(v, n - 1);
}


int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);
    int resultado = sumaVector(vect,n);
    cout<<"El resultado es :"<<resultado;

    return 0;
}

