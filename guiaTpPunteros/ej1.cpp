#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int var1 = 10;
  int var2 = 20;

  int *a;

  a = &var1;
  cout << "La direccion de var1 es: " << a << " y su contenido es: " << *a << endl;

  a = &var2;

  cout << "La direccion de var2 es: " << a << " y su contenido es: " << *a << endl;

  return 0;
}
