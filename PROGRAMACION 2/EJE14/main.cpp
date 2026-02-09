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

void invertirVector(int v[], int inicio, int fin)
{
    if (inicio >= fin)
        return;

    int aux = v[inicio];
    v[inicio] = v[fin];
    v[fin] = aux;

    invertirVector(v, inicio + 1, fin - 1);
}



int main()
{
    int vect[100], n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    cout<<"Invertido"<<endl;
    invertirVector(vect,0,n);

    return 0;
}
