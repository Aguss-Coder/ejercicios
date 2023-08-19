#include <iostream>

using namespace std;

int main() {
  int result = 0;
  int answer, number_of_answers;

  cout << "enter the number of answers: ";
  cin >> number_of_answers;

  if (number_of_answers <= 0) {
    cout << "You don't have any answers or you entered the number wrong." << endl;
    main();
  } else {
    cout << "Choose the answer:\n1. True\n2. False\n3. blank" << endl;
   for (int i = 1; i <= number_of_answers; i++) {
    cout << "Enter the " << i << " answer: ";
    cin >> answer;

    switch (answer) {
      case 1:
        result = result + 4;
        break;
      case 2:
        result = result - 1;
        break;
      case 3:
        result = result;
        break;
      default:
        cout << "This is not an option" << endl;
        i--;
    }
   }
  }
  cout << "Total points: " << result << endl;

  return 0;
}