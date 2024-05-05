#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  int num1, den1;
  int num2, den2;

  cout << "Enter the numerator: ";
  cin >> num1;
  cout << "Enter the denominator: ";
  cin >> den1;

  cout << "Enter the numerator: ";
  cin >> num2;
  cout << "Enter the denominator: ";
  cin >> den2;
  
  Rational r1(num1, den1);
  Rational r2(num2, den2);
  
  Rational r3 = r1 + r2;
  r3.simplify();

  cout << "La suma de " << r1 << " y " << r2 << " es " << r3 << endl;

  ++r1;
  cout << "r1++: " << r1 << endl;

  --r2;
  cout << "r2--: " << r2 << endl;

  r1 += 2;
  cout << "r1 += 2: " << r1 << endl;

  r2 -= 2;
  cout << "r2 -= 2: " << r2 << endl;

  return 0;
}
