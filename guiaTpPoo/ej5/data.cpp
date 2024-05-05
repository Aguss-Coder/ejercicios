#include "data.h"
#include <cmath>

using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

Point &Point::operator++() {
    x++;
    y++;
    return *this;
}

Point &Point::operator--() {
    x--;
    y--;
    return *this;
}

Point Point::operator+(const Point &p) {
    Point result;
    result.x = x + p.x;
    result.y = y + p.y;
    return result;
}

Point Point::operator+(double value) {
    Point result;
    result.x = x + value;
    result.y = y + value;
    return result;
}

Point Point::operator-(const Point &p) {
    Point result;
    result.x = x - p.x;
    result.y = y - p.y;
    return result;
}

Point Point::operator-(double value) {
    Point result;
    result.x = x - value;
    result.y = y - value;
    return result;
}

string Point::toPolar() {
  double r = sqrt(x * x + y * y);
  double theta = atan2(y, x);
  return "r = " + to_string(r) + ", theta = " + to_string(theta);
}

ostream &operator<<(ostream &os, const Point &p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}