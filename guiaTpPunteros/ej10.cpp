#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Contiene algorithmos de ordenamiento y busqueda

using namespace std;

int main(int argc, char const *argv[]) {
  int N;

  cout << "Ingrese la cantidad de elementos del arreglo: ";
  cin >> N;

  int *arreglo = new int[N];

  srand(time(0));

  for (int i = 0; i < N; i++)
  {
    arreglo[i] = rand() % 101;
  }

  sort(arreglo, arreglo + N, greater<int>()); // grater<int>() sirve para que los elementos se ordenen de mayor a menor, por defecto es de menor a mayor

  cout << "Valores ordenados de mayor a menor: ";
  for (int i = 0; i < N; i++)
  {
    cout << arreglo[i] << " ";
  }
  cout << endl;

  delete[] arreglo;

  return 0;
}
