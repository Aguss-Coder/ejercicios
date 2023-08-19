#include <iostream>

using namespace std;

int main() {
  int number_of_grades;
  float grades, result;

  cout << "Enter the number of notes: " << endl;
  cin >> number_of_grades;

  if (number_of_grades <= 0) {
    cout << "You don't have any grades or you entered the number wrong." << endl;
    main();
  } else {
   for (int i = 1; i <= number_of_grades; i++) {
    cout << "Enter the " << i << " grade: " << endl;
    cin >> grades;
    result = result + grades;
   }
   cout << "The average grade point is: " << result / number_of_grades << endl;
  }

  return 0;
}
