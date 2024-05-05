#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  string name, dni;
  int birthYear;
  char sex;
  double weight, height;

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your birth year: ";
  cin >> birthYear;
  cout << "Enter your DNI: ";
  cin >> dni;
  cout << "Enter your sex: ";
  cin >> sex;
  cout << "Enter your weight: ";
  cin >> weight;
  cout << "Enter your height: ";
  cin >> height;

  Person person(name, birthYear, dni, sex, weight, height);

  cout << "Name: " << person.getName() << endl;
  cout << "Birth year: " << person.getBirthYear() << endl;
  cout << "DNI: " << person.getDni() << endl;
  cout << "Sex: " << person.getSex() << endl;
  cout << "Weight: " << person.getWeight() << endl;
  cout << "Height: " << person.getHeight() << endl;

  cout << "IMC: " << person.calculateIMC() << endl;
  cout << "Age: " << person.calculateAge() << endl;
  cout << "Is adult: " << (person.isAdult() ? "Yes" : "No") << endl;

  return 0;
}
