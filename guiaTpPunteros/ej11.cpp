#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  float suma = 0, maxVal = -1e9, minVal = 1e9;

  cout << "Ingrese la cantidad de elementos: ";
  cin >> N;

  float *arr = new float[N];

  for (int i = 0; i < N; i++) {
    cout << "Ingrese el valor " << i + 1 << ": ";
    cin >> arr[i];
    suma += arr[i];
    maxVal = max(maxVal, arr[i]);
    minVal = min(minVal, arr[i]);
  }

  float media = suma / N;

  cout << "Maximo: " << maxVal << endl;
  cout << "Minimo: " << minVal << endl;
  cout << "Media: " << media << endl;

  delete[] arr;

  return 0;
}
