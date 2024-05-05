#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[5] = {1, 2, 3, 4, 5};

  int *ptr;
  int *ptr2;

  ptr = &arr[0];
  ptr2 = &arr[4];

  cout << "La diferencia entre la direccion de arr[0] y arr[4] es: " << ptr2 - ptr << endl;

  return 0;
}
