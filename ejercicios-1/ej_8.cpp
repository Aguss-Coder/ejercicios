#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  int day, month, year;

  cout << "Enter the person's name: ";
  cin >> name;

  cout << "Enter the day of birth: ";
  cin >> day;

  cout << "Enter the month of birth: ";
  cin >> month;

  cout << "Enter the year of birth: ";
  cin >> year;

  int age = 2023 - year;

  if (age >= 18) {
    cout << name << " can access a tax benefit." << endl;
  } else {
    cout << name << " can't access a tax benefit." << endl;
  }

  return 0;
}