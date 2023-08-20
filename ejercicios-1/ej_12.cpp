#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Ingrese un numero: ";
  cin >> number;

  cout << number % 2 << endl;

  if (number < 0) {
    cout << "The number has to be greater than zero" << endl;
  } else {
    if (number % 2 != 0) {
      cout << "This number is not even" << endl;
    } else {
    cout << "this number is even" << endl;
    }
  }

  return 0;
}