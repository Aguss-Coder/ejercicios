#include <iostream>

using namespace std;

float calcularElCubo(float numero) {
  return numero * numero * numero;
}

int main() {
  float numero;

  cout << "Ingrese un numero con punto decimal: ";
  cin >> numero;

  // Calculamos el cubo del numero
  float result = calcularElCubo(numero);

  // Imprimimos el resultado
  cout << "El cubo de " << numero << " es " << result << endl;

  return 0;
}