#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Complex c1(1, 2);
  Complex c2(3, 4);

  Complex c3 = c1 + c2;
  Complex c4 = c1 - c2;
  Complex c5 = c1 * c2;
  Complex c6 = c1.conjugate();

  cout << "c1: " << c1 << endl;
  cout << "c2: " << c2 << endl;
  cout << "c1 + c2: " << c3 << endl;
  cout << "c1 - c2: " << c4 << endl;
  cout << "c1 * c2: " << c5 << endl;
  cout << "c1 conjugado: " << c6 << endl;

  return 0;
}
