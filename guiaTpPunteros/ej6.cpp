#include <iostream>
#include <cstring>

using namespace std;

void invertirCadena(char *ptr) {
  int len = strlen(ptr);
  for (int i = 0; i < len / 2; i++)
  {
    swap(ptr[i], ptr[len - i - 1]);
  }
}

int main(int argc, char const *argv[])
{
  char cadena[50];

  cout << "Ingrese una cadena de maximo 50 caracteres: ";
  cin.getline(cadena, 50);

  invertirCadena(cadena);

  cout << "La cadena invertida es: " << cadena << endl;

  return 0;
}
