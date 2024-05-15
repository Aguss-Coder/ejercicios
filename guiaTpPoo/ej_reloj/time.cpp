#include "time.h"
#include <iostream>

using namespace std;

Time::Time() {
  hour = 0;
  minute = 0;
  second = 0;
}

string Time::showTime() {
  return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
}