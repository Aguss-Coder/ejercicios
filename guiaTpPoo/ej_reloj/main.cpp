#include <iostream>
#include "clock.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Clock clock;

    clock.showTime();
    clock.showTemperature();

    clock.setTime(Time(10, 20, 30));
    clock.setAlarm(Time(10, 25, 0));

    clock.showTime();

    if (clock.alarmStatus) {
        cout << "Alarma activada" << endl;
    } else {
        cout << "Alarma desactivada" << endl;
    }

    clock.activateAlarm();

    clock.changeTemperatureScale("F");
    clock.showTemperature();
    
  return 0;
}
