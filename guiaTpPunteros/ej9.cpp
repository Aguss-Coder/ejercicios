#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int N;

  cout << "Ingrese la cantidad de elementos del arreglo: ";
  cin >> N;

  int *arreglo = new int[N];

  for (int i = 0; i < N; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " del arreglo: ";
    cin >> arreglo[i];
  }

  cout << "Contenido del arreglo (notacion vectorial): ";
  for (int i = 0; i < N; i++)
  {
    cout << arreglo[i] << " ";
  }
  cout << endl;

  cout << "Contenido del arreglo (notacion punteros): ";
  for (int i = 0; i < N; i++)
  {
    cout << *(arreglo + i) << " ";
  }
  cout << endl;

  delete[] arreglo;

  return 0;
}
