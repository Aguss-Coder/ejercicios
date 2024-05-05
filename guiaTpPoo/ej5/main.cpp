#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  double x1, y1;
  double x2, y2;

  cout << "Enter the x and y coordinates of the first point: ";
  cin >> x1 >> y1;
  
  Point p1;
  Point p2;

  p1.setX(x1);
  p1.setY(y1);

  cout << "Enter the x and y coordinates of the second point: ";
  cin >> x2 >> y2;

  p2.setX(x2);
  p2.setY(y2);

  Point p3 = p1 + p2;
  Point p4 = p1 - p2;
  Point p5 = p1 + 1;
  Point p6 = p1 - 1;

  cout << "The sum of the points is: " << p3 << endl;
  cout << "The difference of the points is: " << p4 << endl;
  cout << "The sum of the point and 1 is: " << p5 << endl;
  cout << "The difference of the point and 1 is: " << p6 << endl;

  cout << "p1++: " << ++p1 << endl;
  cout << "p1--: " << --p1 << endl;

  cout << "The polar coordinates of p1 are: " << p1.toPolar() << endl;
  cout << "The polar coordinates of p2 are: " << p2.toPolar() << endl;

  return 0;
}
