#include <iostream>
#include "data.h"
#include <ctime>

using namespace std;

Person::Person(): name(""), birthYear(0), dni(""), sex('M'), weight(0), height(0) {}

Person::Person(string name, int birthYear, char sex)
  : name(name), birthYear(birthYear), dni(""), sex(sex), weight(0), height(0) {}

Person::Person(string name, int birthYear, string dni, char sex, double weight, double height)
  : name(name), birthYear(birthYear), dni(dni), sex(sex), weight(weight), height(height) {}

string Person::getName() {
  return name;
}

int Person::getBirthYear() {
  return birthYear;
}

string Person::getDni() {
  return dni;
}

char Person::getSex() {
  return sex;
}

double Person::getWeight() {
  return weight;
}

double Person::getHeight() {
  return height;
}

double Person::calculateIMC() {
  return weight / (height * height);
}

int Person::calculateAge() {
  time_t t = time(0);
  struct tm* now = localtime(&t);
  return now->tm_year + 1900 - birthYear;
}

bool Person::isAdult() {
  return calculateAge() >= 18;
}