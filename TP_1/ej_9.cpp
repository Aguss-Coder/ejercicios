#include <iostream>
using namespace std;

int main() {
    int n, original, invertido = 0;
    cout << "Ingresa un número entero: ";
    cin >> n;
    original = n;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    if (original == invertido) {
        cout << "El número es capicúa." << endl;
    } else {
        cout << "El número no es capicúa." << endl;
    }
    return 0;
}