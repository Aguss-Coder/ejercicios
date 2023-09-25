#include<iostream>
using namespace std;

void ingresarDatos(int n, int arreglo[]) {
    cout << "Ingrese los elementos del arreglo: ";
    for(int i = 0; i < n; i++)
        cin >> arreglo[i];
}

void imprimirArreglo(int n, int arreglo[]) {
    cout << "Los elementos del arreglo son: ";
    for(int i = 0; i < n; i++)
        cout << arreglo[i] << " ";
    cout << endl;
}

int main() {
    int arreglo[5];
    ingresarDatos(5, arreglo);
    imprimirArreglo(5, arreglo);

    return 0;
}
