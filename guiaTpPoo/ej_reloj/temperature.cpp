#include "temperature.h"
#include <iostream>

using namespace std;

Temperature::Temperature() {
  value = 0;
  scale = "C";
}

float Temperature::getValue() {
  return value;
}

void Temperature::setScale(string scale) {
  this->scale = scale;
}

string Temperature::getTemperature() {
  return to_string(value) + "°" + scale;
}

void Temperature::convertScale(string scale) {
  if (this->scale == "C" && scale == "F") {
    value = value * 9 / 5 + 32;
    this->scale = scale;
  } else if (this->scale == "F" && scale == "C") {
    value = (value - 32) * 5 / 9;
    this->scale = scale;
  }
}