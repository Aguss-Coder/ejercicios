#include "data.h"
#include <algorithm>

using namespace std;

Rational::Rational(int n = 0, int d = 1): numerator(n), denominator(d) {
  simplify();
}

void Rational::simplify() {
  int gcd = __gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}

Rational Rational::operator+(Rational &r) {
  int num = numerator * r.denominator + r.numerator * denominator;
  int den = denominator * r.denominator;
  return Rational(num, den);
}

Rational Rational::operator-(Rational &r) {
  int num = numerator * r.denominator - r.numerator * denominator;
  int den = denominator * r.denominator;
  return Rational(num, den);
}

Rational &Rational::operator++() {
  numerator += denominator;
  return *this;
}

Rational &Rational::operator--() {
  numerator -= denominator;
  return *this;
}

Rational &Rational::operator+=(int i) {
  numerator += i * denominator;
  return *this;
}

Rational &Rational::operator-=(int i) {
  numerator -= i * denominator;
  return *this;
}

ostream &operator<<(ostream &os, Rational &r) {
  os << r.numerator << "/" << r.denominator;
  return os;
}