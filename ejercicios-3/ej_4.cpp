#include <iostream>

using namespace std;

void saberQueNumeroEs(int numero) {
  // Determinamos si el numero es positivo, negativo o cero
  if (numero == 0) {
    cout << "El numero es cero." << endl;
  } else if (numero > 0) {
    cout << "El numero es positivo." << endl;
  } else {
    cout << "El numero es negativo." << endl;
  }
}

int main() {
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  saberQueNumeroEs(numero);

  return 0;
}