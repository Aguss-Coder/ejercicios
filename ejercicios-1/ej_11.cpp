#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Enter a 2-digit number: ";
  cin >> number;

  // Obtenemos las unidades
  int units = number % 10;

  // Obtenemos las decenas
  int tens = number / 10;

  // Imprimimos el resultado
  cout << "The number has " << tens << " tens and " << units << " units." << endl;

  return 0;
}