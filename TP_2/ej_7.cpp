#include <iostream>

using namespace std;

// Declaramos las funciones necesarias.
void leer_vector(int* vector, int n);
int producto_punto(int* vector_a, int* vector_b, int n);
void imprimir_resultado(int resultado);

int main() {
  // Declaramos las variables necesarias.
  int n;
  int* vector_a;
  int* vector_b;
  int resultado;

  // Solicitamos al usuario el valor de N.
  cout << "Ingrese el tamaño de los vectores: ";
  cin >> n;

  // Declaramos los vectores.
  vector_a = new int[n];
  vector_b = new int[n];

  // Leemos los vectores.
  leer_vector(vector_a, n);
  leer_vector(vector_b, n);

  // Calculamos el producto punto.
  resultado = producto_punto(vector_a, vector_b, n);

  // Imprimimos el resultado.
  imprimir_resultado(resultado);

  // Liberamos la memoria.
  delete[] vector_a;
  delete[] vector_b;

  return 0;
}

// Función para leer un vector.
void leer_vector(int* vector, int n) {
  for (int i = 0; i < n; i++) {
    // Pedimos al usuario que ingrese el elemento del vector en la posición i.
    cout << "Ingrese el elemento del vector " << i + 1 << ": ";
    cin >> vector[i];
  }
}

// Función para calcular el producto punto.
int producto_punto(int* vector_a, int* vector_b, int n) {
  int resultado = 0;
  for (int i = 0; i < n; i++) {
    resultado += vector_a[i] * vector_b[i];
  }
  return resultado;
}

// Función para imprimir el resultado.
void imprimir_resultado(int resultado) {
  cout << "El producto punto es: " << resultado << endl;
}