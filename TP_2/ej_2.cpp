#include <iostream>
using namespace std;

void rellenarArreglo(int longitud, int base, int arreglo[]) {
    for(int i = 0; i < longitud; i++)
        arreglo[i] = base * (i + 1);
}

void imprimirArreglo(int longitud, int arreglo[]) {
    for(int i = 0; i < longitud; i++)
        cout << arreglo[i] << " ";
    cout << endl;
}

int main() {
    int longitud, base;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> longitud;
    cout << "Ingrese la base: ";
    cin >> base;

    int arreglo[longitud];
    rellenarArreglo(longitud, base, arreglo);

    cout << "El arreglo es: ";
    imprimirArreglo(longitud, arreglo);

    return 0;
}
