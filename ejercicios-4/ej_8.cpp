#include <iostream>
using namespace std;

int main() {
    int n, invertido = 0;
    cout << "Ingresa un número entero positivo: ";
    cin >> n;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    cout << "El número invertido es: " << invertido << endl;
    return 0;
}