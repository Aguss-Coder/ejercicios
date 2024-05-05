#include <iostream>

using namespace std;

class Person {
  private:
    string name;
    int birthYear;
    string dni;
    char sex;
    double weight;
    double height;
  public:
    Person();
    Person(string, int, char);
    Person(string, int, string, char, double, double);
    string getName();
    int getBirthYear();
    string getDni();
    char getSex();
    double getWeight();
    double getHeight();
    double calculateIMC();
    int calculateAge();
    bool isAdult();
};