#include <iostream>
using namespace std;

bool es_hyperpar(int n) {
    while (n > 0) {
        int digito = n % 10;
        if (digito % 2 != 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
  int numero;

  cout << "Ingrese un numero entero positivo: ";
  cin >> numero;

  bool result = es_hyperpar(numero);

  if (result == true) {
    cout << true << numero << " es un hyperpar" << endl;
  } else {
    cout << false << numero << " no es un hyperpar" << endl;
  }

  return 0;
}