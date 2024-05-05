#include <iostream>

using namespace std;

class Rational {
  private:
    int numerator;
    int denominator;
  public:
    Rational(int, int);
    void simplify();
    Rational operator+(Rational &r);
    Rational operator-(Rational &r);
    Rational &operator++();
    Rational &operator--();
    Rational &operator+=(int i);
    Rational &operator-=(int i);
    friend ostream &operator<<(ostream &os, Rational &r);
};