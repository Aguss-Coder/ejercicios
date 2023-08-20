#include <iostream>
#include <cmath>

using namespace std;

float calcuatePerimeter(float first_side, float second_side, float third_side) {
  float result;

  result = first_side + second_side + third_side;

  return result;
}

float calculateArea(float perimeter, float first_side, float second_side, float third_side) {
  float result;

  result = sqrt(perimeter * (perimeter - first_side) * (perimeter - second_side) * (perimeter - third_side));

  return result;
}

int main() {
  float first_side, second_side, third_side, perimeter, area;

  cout << "Enter the sides of the triangle" << endl;
  cout << "First side: ";
  cin >> first_side;
  cout << "Second side: ";
  cin >> second_side;
  cout << "Third side: ";
  cin >> third_side;

  perimeter = calcuatePerimeter(first_side, second_side, third_side);
  area = calculateArea(perimeter, first_side, second_side, third_side);

  cout << "The area is: " << area << endl;

  return 0;
}