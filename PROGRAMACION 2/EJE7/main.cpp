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


int buscarElemento(int vect[], int n, int elemento)
{
    for (int i = 0; i < n; i++)
    {
        if (vect[i] == elemento)
            return i;
    }
    return -1;
}

int main()
{
    int vect[100], n, x;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    cout << "Ingrese elemento a buscar: ";
    cin >> x;

    int pos = buscarElemento(vect, n, x);

    if (pos != -1)
        cout << "Elemento encontrado en la posicion: " << pos << endl;
    else
        cout << "Elemento no encontrado" << endl;

    return 0;
}

