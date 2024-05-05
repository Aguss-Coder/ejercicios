#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[5] = {1, 2, 3, 4, 5};

  int *ptr;

  for (int i = 0; i < 5; i++)
  {
    ptr = &arr[i];
    cout << "La direccion de arr[" << i << "] es: " << ptr <<  endl;
  }
  

  return 0;
}
