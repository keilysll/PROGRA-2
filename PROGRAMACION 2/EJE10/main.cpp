#include <iostream>
using namespace std;

bool esPalindromo(char vect[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (vect[i] != vect[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    char vect[100];
    int n;

    cout << "Ingrese la cantidad de caracteres: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese caracter " << i + 1 << ": ";
        cin >> vect[i];
    }

    if (esPalindromo(vect, n))
        cout << "El vector ES palindromo" << endl;
    else
        cout << "El vector NO es palindromo" << endl;

    return 0;
}

