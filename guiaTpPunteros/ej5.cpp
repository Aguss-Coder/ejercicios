#include <iostream>
#include <cctype>

using namespace std;

void aMayusculas(char *ptr)
{
  while(*ptr != '\0')
  {
    *ptr = toupper(*ptr);
    ptr++;
  }
}

int main(int argc, char const *argv[])
{
  char palabra[10];

  cout << "Ingrese una palabra de maximo 10 caracteres: ";
  cin >> palabra;

  aMayusculas(palabra);

  cout << "La palabra en mayusculas es: " << palabra << endl;

  return 0;
}
