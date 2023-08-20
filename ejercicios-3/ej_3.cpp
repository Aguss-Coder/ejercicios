#include <iostream>

using namespace std;

int saberElMenor(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int a, b;

  cout << "Ingrese el primer numero: ";
  cin >> a;

  cout << "Ingrese el segundo numero: ";
  cin >> b;

  // Determinamos el menor de los dos numeros
  int menor = saberElMenor(a, b);

  // Imprimimos el resultado
  cout << "El menor de los dos numeros es " << menor << endl;

  return 0;
}