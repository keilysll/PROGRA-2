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

int menorVector(int v[], int n)
{
    if (n == 1)
        return v[0];

    int menor = menorVector(v, n - 1);

    if (v[n - 1] < menor)
        return v[n - 1];
    else
        return menor;
}



int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    int resultado = menorVector(vect,n);
    cout<<"Menor nro: "<<resultado;

    return 0;
}
