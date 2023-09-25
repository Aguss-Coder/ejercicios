#include <iostream>

using namespace std;

char signo(int numero) {
  if (numero > 0) {
    return 'P';
  } else if (numero < 0) {
    return 'N';
  } else {
    return 'C';
  }
}

int main() {
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  // Obtenemos el signo del numero
  char signo_numero = signo(numero);

  // Imprimimos el resultado
  cout << "El signo del numero es " << signo_numero << endl;

  return 0;
}