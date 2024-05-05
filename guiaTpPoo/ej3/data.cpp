#include "data.h"

using namespace std;

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
};

Complex Complex::conjugate() {
    return Complex(real, -imaginary);
}

Complex Complex::operator+(const Complex &c) {
    return Complex(real + c.real, imaginary + c.imaginary);
}

Complex Complex::operator-(const Complex &c) {
    return Complex(real - c.real, imaginary - c.imaginary);
}

Complex Complex::operator*(const Complex &c) {
    double r = real * c.real - imaginary * c.imaginary;
    double i = real * c.imaginary + imaginary * c.real;
    return Complex(r, i);
}

ostream &operator<<(ostream &os, const Complex &c) {
    os << c.real << " + " << c.imaginary << "i";
    return os;
}