#include "clock.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

Clock::Clock() {
  time = Time();
  temperature = Temperature();
  alarm = NULL;
  alarmStatus = false;
}

void Clock::showTime() {
  cout << "Hora: " << time.showTime() << endl;
}

void Clock::showTemperature() {
  cout << "Temperatura: " << temperature.getTemperature() << endl;
}

void Clock::setTime(Time time) {
  this->time = time;
}

void Clock::setAlarm(Time time) {
  alarm = new Time(time);
}

void Clock::activateAlarm() {
  alarmStatus = true;
  this_thread::sleep_for(chrono::seconds(20));
  alarmStatus = false;
  cout << "Alarma desactivada" << endl;
}

void Clock::deactivateAlarm() {
  alarmStatus = false;
}

void Clock::changeTemperatureScale(string scale) {
  temperature.convertScale(scale);
}

Clock::~Clock() {
  delete alarm;
}