#include <iostream>

using namespace std;

// Declaramos las funciones necesarias.
void llenar_arreglo(int* arreglo, int n);
int calcular_suma(int* arreglo, int n);
void imprimir_arreglo(int* arreglo, int n);

int main() {
  // Declaramos las variables necesarias.
  int arreglo[20];
  int suma;

  // Llenamos el arreglo.
  llenar_arreglo(arreglo, 20);

  // Calculamos la suma.
  suma = calcular_suma(arreglo, 20);

  // Imprimimos el arreglo y la suma.
  imprimir_arreglo(arreglo, 20);
  cout << "La suma es: " << suma << endl;

  return 0;
}

// Función para llenar el arreglo.
void llenar_arreglo(int* arreglo, int n) {
  for (int i = 0; i < n; i++) {
    arreglo[i] = 2 * i;
  }
}

// Función para calcular la suma.
int calcular_suma(int* arreglo, int n) {
  int suma = 0;
  for (int i = 0; i < n; i++) {
    suma += arreglo[i];
  }
  return suma;
}

// Función para imprimir el arreglo.
void imprimir_arreglo(int* arreglo, int n) {
  cout << "Los números pares son: ";
  for (int i = 0; i < n; i++) {
    cout << arreglo[i] << " ";
  }
  cout << endl;
}
