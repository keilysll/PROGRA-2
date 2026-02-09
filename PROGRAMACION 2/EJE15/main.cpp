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

int buscarElemento(int v[], int n, int x)
{
    if (n == 0)
        return -1;

    if (v[n - 1] == x)
        return n - 1;

    return buscarElemento(v, n - 1, x);
}



int main()
{
    int vect[100], n,x;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    cout<<"Que nro quisiera buscar?"<<endl;
    cin>>x;

    int resultado = buscarElemento(vect,n,x);
    cout<<"Posicion : "<<resultado;

    return 0;
}
