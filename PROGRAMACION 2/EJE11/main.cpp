#include <iostream>
using namespace std;

void llenarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

void unirVectoresDesc(int v1[], int n1, int v2[], int n2, int v3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] >= v2[j])
            v3[k++] = v1[i++];
        else
            v3[k++] = v2[j++];
    }

    while (i < n1)
        v3[k++] = v1[i++];

    while (j < n2)
        v3[k++] = v2[j++];
}

int main()
{
    int v1[50], v2[50], v3[100];
    int n1, n2;

    cout << "Ingrese tamaño del vector 1: ";
    cin >> n1;
    cout << "Ingrese vector 1:" << endl;
    llenarVector(v1, n1);

    cout << "\nIngrese tamaño del vector 2: ";
    cin >> n2;
    cout << "Ingrese vector 2:" << endl;
    llenarVector(v2, n2);

    unirVectoresDesc(v1, n1, v2, n2, v3);

    cout << "\nVector unido DESCENDENTE:" << endl;
    mostrarVector(v3, n1 + n2);

    return 0;
}

