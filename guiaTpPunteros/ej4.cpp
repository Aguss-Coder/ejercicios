#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
  /* para que los números aleatorios sean diferentes cada vez que se ejecute el programa,
  se declara srand(time(0)) */
  srand(time(0));

  int arr[15];

  for (int i = 0; i < 15; i++)
  {
    arr[i] = rand() % 100 + 1; // números aleatorios entre 1 y 100
  }

  int *ptr;

  for (int i = 0; i < 15; i++)
  {
    ptr = &arr[i];
    cout << "El valor del elemento " << i << " es: " << *ptr << " y su dirección es: " << ptr << endl;
  }
  

  return 0;
}
