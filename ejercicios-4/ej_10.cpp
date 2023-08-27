#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingresa un número entero positivo: ";
    cin >> n;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    cout << "La suma de las cifras es: " << suma << endl;
    return 0;
}