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

void invertirVector(int vect[], int n)
{
    int aux;
    for (int i = 0; i < n / 2; i++)
    {
        aux = vect[i];
        vect[i] = vect[n - 1 - i];
        vect[n - 1 - i] = aux;
    }
}


int main()
{
    int vect[100], n ;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);

    cout << "Vector original: ";
    mostrarVector(vect, n);

    invertirVector(vect, n);
    cout << "Vector invertido: ";
    mostrarVector(vect, n);


    return 0;
}
