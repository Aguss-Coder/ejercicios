#include <iostream>

using namespace std;

class Password {
  private:
    int length;
    string password;
  public:
    Password();
    void generatePassword();
    bool isStrong();
    void display();
    void setLength(int length);
};