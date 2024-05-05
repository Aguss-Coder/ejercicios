#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int filas, columnas = 0;

  cout << "Ingrese la cantidad de filas: ";
  cin >> filas;
  cout << "Ingrese la cantidad de columnas: ";
  cin >> columnas;

  float **arr = new float*[filas];

  for (int i = 0; i < filas; i++) {
    arr[i] = new float[columnas];
  }

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Ingrese el valor de la fila " << i << " y columna " << j << ": ";
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < filas; i++) {
    delete[] arr[i];
  }

  delete[] arr;

  return 0;
}
