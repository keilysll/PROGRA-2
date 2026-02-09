#include <iostream>
using namespace std;

string decimalAHexadecimal(int n) {
    if (n == 0)
        return "0";

    string hex = "";
    char digitos[] = {'0','1','2','3','4','5','6','7',
                      '8','9','A','B','C','D','E','F'};

    while (n > 0) {
        int residuo = n % 16;
        hex = digitos[residuo] + hex;
        n /= 16;
    }

    return hex;
}

int main() {
    int numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    cout << "Hexadecimal: " << decimalAHexadecimal(numero);

    return 0;
}
