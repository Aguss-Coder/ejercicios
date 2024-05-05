#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Password p1;
  p1.display();
  cout << "Is strong: " << (p1.isStrong() ? "Yes" : "No") << endl;

  p1.setLength(15);
  p1.display();
  cout << "Is strong: " << (p1.isStrong() ? "Yes" : "No") << endl;

  return 0;
}
