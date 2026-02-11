

#include <iostream>
using namespace std;

void mostrar(int n)
{
    if (n > 1)
    {
        mostrar(n - 1);
    }

    cout << n << " ";
}

int main()
{
    int n;
    cin >>n;
    mostrar(n);
}

