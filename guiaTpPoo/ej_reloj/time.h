#include <iostream>

using namespace std;

class Time {
  protected:
    int hour;
    int minute;
    int second;
  public:
    Time();
    Time(int hour, int minute, int second): hour(hour), minute(minute), second(second) {};
    string showTime();
};