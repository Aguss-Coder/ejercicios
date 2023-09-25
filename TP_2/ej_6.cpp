#include <iostream>

using namespace std;

// Declaramos las funciones necesarias.
void leer_numeros(int* numeros);
float calcular_media(int* numeros, int n);
void imprimir_numeros(int* numeros, int n);

int main() {
  // Declaramos las variables necesarias.
  int numeros[5];
  float media;

  // Leemos los números.
  leer_numeros(numeros);

  // Calculamos la media.
  media = calcular_media(numeros, 5);

  // Imprimimos los números y la media.
  imprimir_numeros(numeros, 5);
  cout << "La media es: " << media << endl;

  return 0;
}

// Función para leer los números.
void leer_numeros(int* numeros) {
  for (int i = 0; i < 5; i++) {
    // Pedimos al usuario que ingrese el número en la posición i.
    cout << "Ingrese el número " << i + 1 << ": ";
    cin >> numeros[i];
  }
}

// Función para calcular la media.
float calcular_media(int* numeros, int n) {
  float suma = 0;
  for (int i = 0; i < n; i++) {
    suma += numeros[i];
  }
  return suma / n;
}

// Función para imprimir los números.
void imprimir_numeros(int* numeros, int n) {
  cout << "Los números son: ";
  for (int i = 0; i < n; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
}
