#include <iostream>
using namespace std;

float suma(float numero_1, float numero_2) {
  return numero_1 + numero_2;
}

int main() {
  float resultado, num_1, num_2;

  cout << "Ingresar los numeros a sumar: " << endl;
  cin >> num_1;
  cin >>num_2;

  resultado = suma(num_1, num_2);
  cout << "El resultado de la suma es: " << resultado << endl;

  return 0;
}