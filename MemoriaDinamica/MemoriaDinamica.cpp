#include <iostream>
using namespace std;

void reservar(int**& m, int f, int c) {
    m = new int* [f];
    for (int i = 0; i < f; i++) {
        m[i] = new int[c];
    }
}

void llenar(int** m, int f, int c) {
    cout << "Ingrese los valores:\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
}

void mostrar(int** m, int f, int c) {
    cout << "Matriz:\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void liberar(int** m, int f) {
    for (int i = 0; i < f; i++) {
        delete[] m[i];
    }
    delete[] m;
}

int main() {
    int f, c;
    int** matriz;

    cout << "Filas: ";
    cin >> f;
    cout << "Columnas: ";
    cin >> c;

    reservar(matriz, f, c);
    llenar(matriz, f, c);
    mostrar(matriz, f, c);
    liberar(matriz, f);

    return 0;
}