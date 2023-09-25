#include <iostream>

using namespace std;

int calcularFactorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * calcularFactorial(n - 1);
  }
}

int main() {
  int n;

  cout << "Ingrese un numero: ";
  cin >> n;

  // Calculamos el factorial de n
  int factorial = calcularFactorial(n);

  // Imprimimos el resultado
  cout << "El factorial de " << n << " es " << factorial << endl;

  return 0;
}