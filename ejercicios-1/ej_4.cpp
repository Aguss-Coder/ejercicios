#include <iostream>

using namespace std;

int main() {
  int points = 0;
  int result, number_of_matches;

  cout << "enter the number of matches: ";
  cin >> number_of_matches;

  if (number_of_matches <= 0) {
    cout << "You don't have any answers or you entered the number wrong." << endl;
    main();
  } else {
    cout << "Choose the result:\n1. Win\n2. Tie\n3. Lost" << endl;
   for (int i = 1; i <= number_of_matches; i++) {
    cout << "Enter the " << i << " answer: ";
    cin >> result;

    switch (result) {
      case 1:
        points = points + 3;
        break;
      case 2:
        points = points + 1;
        break;
      case 3:
        points = points;
        break;
      default:
        cout << "This is not an option" << endl;
        i--;
    }
   }
  }
  cout << "Total points: " << points << endl;

  return 0;
}