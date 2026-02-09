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

int menorVector(int vect[], int n)
{
    int menor = vect[0];

    for (int i = 1; i < n; i++)
    {
        if (vect[i] < menor)
        {
            menor = vect[i];
        }
    }
    return menor;
}



int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);
    cout << "El menor elemento del vector es: "
         << menorVector(vect, n) << endl;

    return 0;
}
