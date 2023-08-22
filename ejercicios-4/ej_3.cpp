#include <iostream>

using namespace std;

int saberElMayor(int a, int b) {
  if (a > b) {
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

  // Determinamos el mayor de los dos numeros
  int mayor = saberElMayor(a, b);

  // Imprimimos el resultado
  cout << "El mayor de los dos numeros es " << mayor << endl;

  return 0;
}