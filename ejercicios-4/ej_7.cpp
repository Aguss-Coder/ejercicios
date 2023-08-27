#include <iostream>
using namespace std;

bool es_triangular(int n) {
    int suma = 0;
    int i = 1;
    while (suma < n) {
        suma += i;
        i++;
    }
    return suma == n;
}

int main() {
    int n;
    cout << "Ingresa un número natural: ";
    cin >> n;
    if (es_triangular(n)) {
        cout << n << " es un número triangular." << endl;
    } else {
        cout << n << " no es un número triangular." << endl;
    }
    return 0;
}