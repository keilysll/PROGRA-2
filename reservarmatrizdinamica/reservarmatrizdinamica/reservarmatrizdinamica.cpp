#include <iostream>
using namespace std;

void reservarMatriz(int**& matriz, int filas, int columnas)
{
    // Reservar filas
    matriz = new int* [filas];

    // Reservar columnas para cada fila
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
}

void liberarMatriz(int** matriz, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;
}

int main()
{
    int** matriz;
    int f = 3, c = 4;

    reservarMatriz(matriz, f, c);

    // Llenar matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    // Mostrar matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    liberarMatriz(matriz, f);

    return 0;
}