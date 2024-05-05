#include <iostream>
#include <cctype>

using namespace std;

int contarVocales(char *ptr) {
  int contador = 0;
  while (*ptr != '\0') {
    char toLower = tolower(*ptr);
    if(toLower == 'a' || toLower == 'e' || toLower == 'i' || toLower == 'o' || toLower == 'u') {
      contador++;
    }
    ptr++;
  }
  return contador;
}

int main(int argc, char const *argv[]) {
  char cadena[50];

  cout << "Ingrese una cadena de maximo 50 caracteres: ";
  cin.getline(cadena, 50);

  int cantidadVocales = contarVocales(cadena);

  cout << "La cantidad de vocales en la cadena es: " << cantidadVocales << endl;

  return 0;
}
