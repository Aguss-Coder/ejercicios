#include <iostream>

using namespace std;

int contarOcurrencias(int numero_grande, int numero_pequeño) {
  int contador = 0;
  while (numero_grande > 0) {
    if (numero_grande % numero_pequeño == 0) {
      contador++;
      numero_grande /= numero_pequeño;
    } else {
      break;
    }
  }
  return contador;
}

int main() {
  int numero_grande, numero_pequeño;

  cout << "Ingrese un número grande: ";
  cin >> numero_grande;

  cout << "Ingrese un número pequeño: ";
  cin >> numero_pequeño;

  // Calculamos la cantidad de veces que el número pequeño está contenido en el número grande
  int ocurrencias = contarOcurrencias(numero_grande, numero_pequeño);

  // Imprimimos el resultado
  cout << "El número " << numero_pequeño << " está contenido en el número " << numero_grande << " " << ocurrencias << " veces." << endl;

  return 0;
}