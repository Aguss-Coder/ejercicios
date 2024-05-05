#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Matrix matrix1({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
  Matrix matrix2({{10, 11, 12}, {13, 14, 15}, {16, 17, 18}});

  Matrix sum = matrix1 + matrix2;
  Matrix diff = matrix1 - matrix2;
  Matrix prod = matrix1 * matrix2;

  cout << "Suma de matrices:" << endl;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      cout << sum(i, j) << " ";
    }
    cout << endl;
  }

  cout << "Diferencia de matrices:" << endl;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      cout << diff(i, j) << " ";
    }
    cout << endl;
  }

  cout << "Producto de matrices:" << endl;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      cout << prod(i, j) << " ";
    }
    cout << endl;
  }

  return 0;
}
