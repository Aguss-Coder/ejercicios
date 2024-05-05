#include <iostream>

using namespace std;

class Complex {
  private:
    double real, imaginary;
  public:
    Complex(double, double);
    Complex conjugate();
    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);
    friend ostream &operator<<(ostream &os, const Complex &c);
};