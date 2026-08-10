
#include <iostream>
using namespace std;
/*
void  reservar(int n , int** ptr)
{
    *ptr = new int[n];

}

void llenar(int n, int* ptr)
{
    for (int i = 0; i < n; i++)
        *(ptr + i) = i + 1;

}
void mostrar(int n, int* ptr)
{
    for (int i = 0; i < n; i++)
        cout << (ptr + i) << ":" << *(ptr + i) << endl;

}
void liberar(int* ptr)
{
    delete[] ptr;
}
*/

void reservarmat(int*** mat, int n)
{
    *mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        *(*mat + i) = new int[n];
    }

}

void llenarmat(int** mat, int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(mat + i) + j) = 0;
        }
    }
}

void mostrarmat(int** mat, int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*(mat + i) + j);
        }
        cout << endl;
    }

}

void liberarmat(int** mat, int n)
{

    for (int i = 0; i < n;i++)
    {
        delete[] * (mat + i);
        delete[] mat;

    }

}
int main()

{
    int n;
    //int* ptr;
    int** mat;

    cout << "Ingresa n: ";
    cin >> n;

    //reservar(n, &ptr);
   // llenar(n, ptr);
    //mostrar(n, ptr);
    //liberar(ptr);


    reservarmat(n, &mat);
    llenarmat(n, mat);
    mostrarmat(n, mat);
    liberarmat(mat);
 
    /*
    int n;
    int** mat;
    cout << "Ingresa n: ";
    cin >> n;
    mat = new int* [n];
    
  */


}

