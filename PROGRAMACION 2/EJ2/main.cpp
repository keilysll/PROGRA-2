#include <iostream>
using namespace std;

bool esPerfecto(int n) {
    int suma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    return suma == n;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPerfecto(num)) {
        cout << "El numero es perfecto";
    } else {
        cout << "El numero no es perfecto";
    }

    return 0;
}
