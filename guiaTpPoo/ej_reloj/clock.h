#include <iostream>
#include "temperature.h"
#include "time.h"

using namespace std;

class Clock {
  protected:
    Time time;
    Temperature temperature;
    Time *alarm;
  public:
    bool alarmStatus;
    Clock();
    void showTime();
    void showTemperature();
    void setTime(Time);
    void setAlarm(Time);
    void activateAlarm();
    void deactivateAlarm();
    void changeTemperatureScale(string);
    ~Clock();
};