#include <iostream>

using namespace std;

int main(void) {
  int hours, hour_price;
  int total_salary = 0;

  cout << "how many hours did the employee work?" << endl;
  cin >> hours;
  if (hours < 0) {
    cout << "This can't be possible, how do you work negative hours?" << endl;
    main();
  } else if (hours == 0) {
    cout << "The employee didn't work" << endl;
    main();
  } else {
    hours = hours;
  }

  cout << "How much does it cost per hour?" << endl;
  cin >> hour_price;

  if (hour_price == 0) {
    cout << "pay him don't be a rat" << endl;
    main();
  } else if (hour_price < 0) {
    cout << "Really?, Try again" << endl;
    main();
  } else {
    hour_price = hour_price;
  }

  total_salary = (hour_price * hours);
  cout << "The total salary is: $" << total_salary << endl;

  return 0;
}