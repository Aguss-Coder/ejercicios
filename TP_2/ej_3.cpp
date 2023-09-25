#include<iostream>
using namespace std;

void sumaVectores(int n, int A[], int B[], int C[]) {
    for(int i = 0; i < n; i++)
        C[i] = A[i] + B[i];
}

void imprimirVector(int n, int C[]) {
    for(int i = 0; i < n; i++)
        cout << C[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    int A[n], B[n], C[n];
    cout << "Ingrese los elementos del vector A: " << endl;
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Ingrese los elementos del vector B: " << endl;
    for(int i = 0; i < n; i++)
        cin >> B[i];

    sumaVectores(n, A, B, C);

    cout << "El vector C es: ";
    imprimirVector(n, C);

    return 0;
}
