#include <iostream>
using namespace std;

void llenarVector(char vect[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese caracter " << i + 1 << ": ";
        cin >> vect[i];
    }
}

void mostrarVector(char vect[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}

bool esPalindromo(char v[], int inicio, int fin)
{
    if (inicio >= fin)
        return true;

    if (v[inicio] != v[fin])
        return false;

    return esPalindromo(v, inicio + 1, fin - 1);
}

int main()
{
    char vect[100];
    int n;

    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    llenarVector(vect, n);
    mostrarVector(vect, n);

    if (esPalindromo(vect, 0, n - 1))
        cout << "El vector ES palindromo" << endl;
    else
        cout << "El vector NO es palindromo" << endl;

    return 0;
}

