#include <iostream>
#include "data.h"
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> a = {1, 2, 3};
  vector<int> b = {4, 5, 6};

  Array1D array1(a);
  Array1D array2(b);

  Array1D sum = array1 + array2;
  Array1D diff = array1 - array2;
  int dotProduct = array1 * array2;

  cout << "Suma de los arrays: ";
  for (vector<int>::size_type i = 0; i < a.size(); i++) {
    cout << sum[i] << " ";
  }

  cout << endl << "Diferencia de los arrays: ";
  for (vector<int>::size_type i = 0; i < a.size(); i++) {
    cout << diff[i] << " ";
  }

  cout << endl << "Producto punto de los arrays: " << dotProduct << endl;
  cout << "Primera componente del primer array: " << array1[0] << endl;

  return 0;
}
