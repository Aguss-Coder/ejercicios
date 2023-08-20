#include <iostream>

using namespace std;

int main() {
  int side1, side2, side3;

  cout << "Enter the sides of the triangle: ";
  cin >> side1 >> side2 >> side3;

  // Verificamos que los lados sean mayores que 0
  if (side1 > 0 && side2 > 0 && side3 > 0) {
    // Verificamos si los lados cumplen con las condiciones para ser un triángulo
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
      // Identificamos el tipo de triángulo
      if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
      } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        cout << "The triangle is isosceles." << endl;
      } else {
        cout << "The triangle is scalene." << endl;
      }
    } else {
      cout << "The sides entered do not form a triangle." << endl;
    }
  } else {
    cout << " Sides entered must be greater than 0." << endl;
  }

  return 0;
}