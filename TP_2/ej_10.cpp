#include <iostream>

using namespace std;

void ingresarValores(int n, int vector[]){
    cout << "Ingrese los valores del vector" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }
}

void imprimirVector(int n, int vector[]){
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

void ordenarVector(int n, int vector[]){
    for (int i = 0; i < (n / 2); i++){
        int aux = vector[i];
        vector[i] = vector[n - i - 1];
        vector[n - i - 1] = aux;
    }
    
}

int main() {
    int n;
    int vector[n];

    cout << "Ingrese el tamaño del vector" << endl;
    cin >> n;

    ingresarValores(n, vector);
    cout << "Los valores del vector son: " << endl;
    imprimirVector(n, vector);

    ordenarVector(n, vector);
    cout << "Los valores del vector reordenado son: " << endl;
    imprimirVector(n, vector);

    return 0;
}