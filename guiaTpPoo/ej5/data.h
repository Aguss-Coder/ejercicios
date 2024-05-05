#include <iostream>

using namespace std;

class Point {
  private:
    double x, y;
  public:
    Point();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    Point &operator++();
    Point &operator--();
    Point operator+(const Point &p);
    Point operator+(double value);
    Point operator-(const Point &p);
    Point operator-(double value);
    string toPolar();
    friend ostream &operator<<(ostream &os, const Point &p);
};